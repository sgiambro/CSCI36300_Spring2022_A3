//==============================================================================
/**
 * @file       Stack_Calc_Factory.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _STACK_CALC_FACTORY_H_
#define _STACK_CALC_FACTORY_H_

/**
 * @brief an interface for creating calculator objects
 * 
 */
class Stack_Calc_Factory : public Calc_Factory {

public:

    /**
     * @brief Construct a new Stack_Calc_Factory object
     * 
     * @param stack 
     */
    Stack_Calc_Factory (Stack<int> &stack);

    /**
     * @brief Create a number command object
     * 
     * @param num 
     * @return Num_Command* 
     */
    Num_Command * create_num_command (int num);
    
    /**
     * @brief Create a add command object
     * 
     * @return Add_Command* 
     */
    Add_Command * create_add_command (void);

    /**
     * @brief Create a subtract command object
     * 
     * @return Sub_Command* 
     */
    Sub_Command * create_sub_command (void);

    /**
     * @brief Create a divide command object
     * 
     * @return Div_Command* 
     */
    Div_Command * create_div_command (void);

    /**
     * @brief Create a multiply command object
     * 
     * @return Mul_Command* 
     */
    Mul_Command * create_mul_command (void);

    /**
     * @brief Create a modular divide command object
     * 
     * @return Mod_Command* 
     */
    Mod_Command * create_mod_command (void);

    /**
     * @brief Create a unary command object
     * 
     * @return Un_Command* 
     */
    Un_Command * create_un_command (void);

    //Stack to make the command objects
    Stack<int> &stack_;

};

#include "Stack_Calc_Factory.cpp"

#endif   // !defined _STACK_CALC_FACTORY_H_
