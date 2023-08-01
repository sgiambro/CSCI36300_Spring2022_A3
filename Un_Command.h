//==============================================================================
/**
 * @file       Un_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _UN_COMMAND_H_
#define _UN_COMMAND_H_

// COMMENT: Create a design that does not require having parenthesis as
// as command object since parenthesis are not executed.
//
// SOLUTION: Removed parenthisis from being a command object

/**
 * @brief Provides no purpose yet
 * 
 */
class Un_Command : public Calc_Command {
protected:
    /**
     * @brief Construct a new Un_Command object
     * 
     * @param &s 
     * @param n 
     */
    Un_Command (Stack<int> &s);

public:
    /**
     * @brief does nothing 
     * 
     */
    void execute (void);


private:
    Stack<int> &s_;
    
};

#include "Un_Command.cpp"

#endif   // !defined _UN_COMMAND_H_
