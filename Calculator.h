//==============================================================================
/**
 * @file       Calculator.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

/**
 * @brief Calculate the users expression
 * 
 */
class Calculator {

public:

    /**
     * @brief Construct a new Calculator object
     * 
     */
    Calculator (void);

    /**
     * @brief translates the infix expression into postfix
     * 
     * @param infix 
     * @param factory 
     * @param postfix 
     * @return true 
     * @return false 
     */
    bool infix_to_postFix (const std::string & infix,
                           Calc_Factory & factory,
                           Array<Command *> & postfix);

    /**
     * @brief Runs the calculator program until told to stop
     * 
     */
    void run (void);

    


};

#include "Calculator.cpp"

#endif   // !defined _CALCULATOR_H_
