//==============================================================================
/**
 * @file       Calc_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALC_COMMAND_H_
#define _CALC_COMMAND_H_

/**
 * @brief Provides a common execute for all binary opperators
 * 
 */
class Calc_Command {

public:
    /**
     * @brief return result of given operation
     * 
     * @return int 
     */
    virtual int execute (void) = 0;

};


#endif   // !defined _CALC_COMMAND_H_
