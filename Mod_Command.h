//==============================================================================
/**
 * @file       Mod_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

/**
 * @brief Provides the capability to moduarly divide
 * 
 */
class Mod_Command : public Bin_Command {

public:
    /**
     * @brief Moduarly divides the two numbers together
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
    char opType = 'O';

};

#include "Mod_Command.cpp"

#endif   // !defined _MOD_COMMAND_H_
