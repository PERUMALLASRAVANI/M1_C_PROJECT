/**
 * @file conversion.h
 * @author Sravani
 * @brief Header file for Calculator application with Arithmetic operations and bitwise operations
 *
 */

#ifndef _CALCULATOR_OPERATIONS_H_
#define _CALCULATOR_OPERATIONS_H_

#include<stdio.h>
#include<math.h>

/**
* @brief does the and,or,ex-or operation  and returns the result
* @param[in] c to select the bitwise operation
* @param[in] n1 value to be used in bitwise operation
* @param[in] n2 value to be used in bitwise operation
* @return Result of bitwise operation of n1 and n2
*/
int bitwise(char c, int n1, int n2);

/**
* @brief does the or operation and returns the result
* @param[in] c to select the arithmetic operation
* @param[in] n1 value to be used in arithmetic operation
* @param[in] n2 value to be used in arithmetic operation
* @return Result of arithmetic operation of n1 and n2
*/
int calculations(char c,int num1, int num2);



#endif  /* #define _CALCULATOR_OPERATIONS_H_ */