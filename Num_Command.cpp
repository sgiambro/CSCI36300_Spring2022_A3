// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Num_Command.h"

//
// Num_Command
//
Num_Command::Num_Command (Stack<int> &s , int n)
: s_  (s),
  n_  (n)
{ }

//
// execute
//
void Num_Command::execute (void){
    s_.push(this->n_);
}