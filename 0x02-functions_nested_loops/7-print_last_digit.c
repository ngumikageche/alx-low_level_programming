#include<stdio.h>
#include"main.h"
/**
 *print_last_digit- function that prints the last digit of a number
 *@num: character
 *Return: last digit on num
 */
int print_last_digit(int num)
{
int last_d = num % 10;
last_d = last_d < 0 ? -1 * last_d : last_d;
_putchar(last_d + '0');
return (last_d);
}
