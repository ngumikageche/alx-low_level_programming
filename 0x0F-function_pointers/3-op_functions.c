#include"3-calc.h"
/**
 *functions-functions that return addition,
 *          substractions, product, divition and modulars
 *          of a given int nums
 */
/**
 *op_add- fucntion that adds two numbers
 *@a:first number
 *@b:second number
 *Return:Returns sum of the two numbers
 */
int op_add(int a, int b)
{
int add = a + b;
return(add);
}
/**
 *op_sub- fucntion that subtracts two numbers
 *@a:first number
 *@b:second number
 *Return:Returns sub of the two numbers
 */

int op_sub(int a, int b)
{
return(a - b);
}
/**
 *op_mul- fucntion that multiply two numbers
 *@a:first number
 *@b:second number
 *Return:Returns product of the two numbers
 */

int op_mul(int a, int b)
{
return(a * b);
}
/**
 *op_add- fucntion that divides two numbers
 *@a:first number
 *@b:second number
 *Return:Returns int a divided by b
 */

int op_div(int a, int b)
{
return(a / b);
}
/**
 *op_mod- fucntion that returns the remaider
 *@a:first number
 *@b:second number
 *Return:Returns sum of the two numbers
 */

int op_mod(int a, int b)
{
return(a % b);
}
