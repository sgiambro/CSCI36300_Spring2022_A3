// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Div_Command.h"

//
// evaluate
//
int Div_Command::evaluate (int a , int b){
    // COMMENT: Your code will crash if you have divide by 0.
    //
    // SOLUTION: added try-catch to test fror zeros in the denominator

    try{
        if(b != 0){
            return a / b;
        }

        throw 999;
    }
    catch(int oor){
        std::cout << "--DIVIDE BY ZERO ERROR--" << std::endl;
    }

}
