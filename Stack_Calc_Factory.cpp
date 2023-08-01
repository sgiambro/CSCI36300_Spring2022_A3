// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Stack_Calc_Factory.h"

//
// Num_Command
//
Stack_Calc_Factory (Stack<int> &stack)
: stack_  (stack)
{ }

//
// create_num_command
//
Num_Command * Stack_Calc_Factory::create_num_command (int num){
    Num_Command * command = Num_Command(this->stack_ , num)
    return nc;
}

//
// create_add_command
//  
Add_Command * Stack_Calc_Factory::create_add_command (void){
    Add_Command * command = Add_Command(this->stack_)
    return command;
}

//
// create_sub_command
//
Sub_Command * Stack_Calc_Factory::create_sub_command (void){
    Sub_Command * command = Sub_Command(this->stack_)
    return command;
}

//
// create_div_command
//
Div_Command * Stack_Calc_Factory::create_div_command (void){
    Div_Command * command = Div_Command(this->stack_)
    return command;
}

//
// create_mul_command
//
Mul_Command * Stack_Calc_Factory::create_mul_command (void){
    Mul_Command * command = Mul_Command(this->stack_)
    return command;
}

//
// create_mod_command
//
Mod_Command * Stack_Calc_Factory::create_mod_command (void){
    Mod_Command * command = Mod_Command(this->stack_)
    return command;
}

//
// create_un_command
//
Un_Command * Stack_Calc_Factory::create_un_command (void){
    Un_Command * command = Un_Command(this->stack_)
    return command;
}