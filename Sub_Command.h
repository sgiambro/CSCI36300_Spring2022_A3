//==============================================================================
/**
 * @file       Sub_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _SUB_COMMAND_H_
#define _SUB_COMMAND_H_

/**
 * @brief Provides the capability to subtract
 * 
 */
class Sub_Command : public Bin_Command {

public:
    /**
     * @brief Subtracts the two numbers 
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
    char opType = 'S';

};

#include "Sub_Command.cpp"

#endif   // !defined _SUB_COMMAND_H_
