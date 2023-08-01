//==============================================================================
/**
 * @file       Mul_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MUL_COMMAND_H_
#define _MUL_COMMAND_H_

/**
 * @brief Provides the capability to multiply
 * 
 */
class Mul_Command : public Bin_Command {

public:
    /**
     * @brief Multiply the two numbers together
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
    char opType = 'M';

};

#include "Mul_Command.cpp"

#endif   // !defined _MUL_COMMAND_H_
