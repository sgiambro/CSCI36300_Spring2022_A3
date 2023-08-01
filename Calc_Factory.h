//==============================================================================
/**
 * @file       Calc_Factory.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALC_FACTORY_H_
#define _CALC_FACTORY_H_

/**
 * @brief an interface for creating calculator objects
 * 
 */
class Calc_Factory {

public:

    /**
     * @brief Destroy the Calc_Factory object
     * 
     */
    virtual ~Calc_Factory (void) = 0;

    /**
     * @brief Create a number command object
     * 
     * @param num 
     * @return Num_Command* 
     */
    virtual Num_Command * create_num_command (int num) = 0;
    
    /**
     * @brief Create a add command object
     * 
     * @return Add_Command* 
     */
    virtual Add_Command * create_add_command (void) = 0;

    /**
     * @brief Create a subtract command object
     * 
     * @return Sub_Command* 
     */
    virtual Sub_Command * create_sub_command (void) = 0;

    /**
     * @brief Create a divide command object
     * 
     * @return Div_Command* 
     */
    virtual Div_Command * create_div_command (void) = 0;

    /**
     * @brief Create a multiply command object
     * 
     * @return Mul_Command* 
     */
    virtual Mul_Command * create_mul_command (void) = 0;

    /**
     * @brief Create a Modular divide command object
     * 
     * @return Mod_Command* 
     */
    virtual Mod_Command * create_mod_command (void) = 0;

    /**
     * @brief Create a Unary command object
     * 
     * @return Un_Command* 
     */
    virtual Un_Command * create_un_command (void) = 0;

private:
    /**
     * @brief Construct a new Calc_Factory object
     * 
     */
    Calc_Factory (const Calc_Factory &);

};

#endif   // !defined _CALC_FACTORY_H_
