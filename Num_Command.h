//==============================================================================
/**
 * @file       Num_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_

/**
 * @brief Provides the capability to put numbers in the stack
 * 
 */
class Num_Command : public Calc_Command {
protected:
    /**
     * @brief Construct a new Num_Command object
     * 
     * @param &s 
     * @param n 
     */
    Num_Command (Stack<int> &s , int n);

public:
    /**
     * @brief Pushes number on to stack
     * 
     */
    void execute (void);

    /**
     * @brief Tells the type of the opperator
     * 
     */
    char opType = 'N';


private:
    Stack<int> &s_;
    int n_;
    
};

#include "Num_Command.cpp"

#endif   // !defined _Num_COMMAND_H_
