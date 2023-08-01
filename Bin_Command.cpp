// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Bin_Command.h"

//
// Bin_Command
//
Bin_Command::Bin_Command (Stack<int> &s)
: s_  (s)
{ }

//
// execute
//
void Bin_Command::execute (void){
    int b = s_.pop();
    int a = s_.pop();
    int result = this->evaluate(a , b);
    s_.push(result);
}