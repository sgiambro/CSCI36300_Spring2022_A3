// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Calculator.h"

//
// Calculator
//
Calculator::Calculator (void){}


//
// infix_to_postFix
//
bool Calculator::infix_to_postFix (const std::string & infix,
                                   Calc_Factory & factory,
                                   Array<Command *> & postfix){

    std::istringstream input(infix);
    std::string token;
    Command * cmd = 0;
    Stack<Command *> temp;
    Stack<char> temp2;
    int index = 0;

    while(!input.eof()){
        if(token == "+"){
            cmd = factory.create_add_command();
        }
        else if(token == "-"){
            cmd = factory.create_sub_command();
        }
        else if(token == "*"){
            cmd = factory.create_mul_command();
        }
        else if(token == "/"){
            cmd = factory.create_div_command();
        }
        else if(token == "%"){
            cmd = factory.create_mod_command();
        }
        else if(token == "("){
            temp2.push('P');
        }
        else if(token != ")"){
            cmd = factory.create_num_command();
            postfix.set(index , cmd);
            index++;
        }

        // Pops from both stacks and adds commands to array until stack is empty or the 
        // token is a higher precedence. Then pushes operator to both stacks  
        if(token != ")" && cmd.opType != 'N'){
            // COMMENT This is not a good way to check if a command is a specific
            // type. Find a why that does not compare a pointer with the address
            // of a class in memory.
            //
            // SOLUTION: added a type identifier to the operators
            
            while( !(temp.is_empty()) || !( (token != "+" || token != "-") && 
                                    (temp.top().opType == 'A' || temp.top().opType == 'S') ) ){

                postfix.set(index , temp.top());
                temp.pop();
                temp2.pop();
                index++;
            }

            temp.push(cmd);
            temp2.push(cmd.opType);

        }
        // Pops temp2 stack and adds opperators to array until matching parenthesis is found 
        else if (token == ")" && cmd.opType != 'N'){
            while(temp2.top() != 'P'){
                postfix.set(index , temp.top());
                temp.pop();
                temp2.pop();
                index++;

                // COMMENT This is not a good way to check if a command is a specific
                // type. Find a why that does not compare a pointer with the address
                // of a class in memory.
                //
                // SOLUTION: added a type identifier to the operators


            }

            temp2.pop();
        }
            

    }

    return true;
}


//
// run
//
void Calculator::run (void){
    std::string infix;
    Stack<int> result;
    Stack_Calc_Factory factory (result);
    Array<Command *> postfix;

    std::cout << "Enter Expression (Type \"QUIT\" To Leave)):" << std::endl;
    std::cin >> infix;

    while(infix != "QUIT"){
        infix_to_postFix(infix , factory , postfix);

        for(int i = 0 ; i<postfix.size() ; i++;){
            postfix.get(i).execute();
        }

        std::cout << result.top() << std::endl;

        std::cout << "Enter Another Expression (Type \"QUIT\" To Leave)):" << std::endl;
        std::cin >> infix;

    }

}
