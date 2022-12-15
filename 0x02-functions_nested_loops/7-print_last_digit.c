#include<stdio.h>
/**
 *int print_last_digit- function that prints hte last digit of a number
 *@num: character
 *Return: last digit on num
 */
int print_last_digit(int num)
{
  int last_d=num % 10;

  return (last_d);
}
