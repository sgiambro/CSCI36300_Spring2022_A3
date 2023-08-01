//==============================================================================
/**
 * @file       Div_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _DIV_COMMAND_H_
#define _DIV_COMMAND_H_

/**
 * @brief Provides the capability to divide
 * 
 */
class Div_Command : public Bin_Command {

public:
    /**
     * @brief Divides the two numbers together
     * 
     * @param a 
     * @param b 
     * @return int 
     */
    int evaluate (int a , int b);

    /**
     * @brief Tells the type of the opperator
     * 
     */
    char opType = 'D';

};

#include "Div_Command.cpp"

#endif   // !defined _DIV_COMMAND_H_
