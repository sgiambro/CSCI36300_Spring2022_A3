//==============================================================================
/**
 * @file       Add_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

/**
 * @brief Provides the capability to add
 * 
 */
class Add_Command : public Bin_Command {

public:
    /**
     * @brief Adds the two numbers together
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
    char opType = 'A';

};

#include "Add_Command.cpp"

#endif   // !defined _ADD_COMMAND_H_
