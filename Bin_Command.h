//==============================================================================
/**
 * @file       Bin_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _BIN_COMMAND_H_
#define _BIN_COMMAND_H_

/**
 * @brief Provides a common execute for all binary opperators
 * 
 */
class Bin_Command : public Calc_Command {
protected:
    /**
     * @brief Construct a new Bin_Command object
     * 
     * @param &s 
     */
    Bin_Command (Stack<int> &s);

public:
    /**
     * @brief Pops the top two numbers, evaluates them, then pushes the result
     * 
     */
    void execute (void);

    /**
     * @brief Abstract function that binary operators will impliment
     * 
     * @param a 
     * @param b 
     * @return int 
     */
    virtual int evaluate (int a , int b) const = 0;

private:
    Stack<int> &s_;
    
};

#include "Bin_Command.cpp"

#endif   // !defined _BIN_COMMAND_H_
