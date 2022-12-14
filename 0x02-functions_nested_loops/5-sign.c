#include<stdio.h>
#include"main.h"
/**
 *print_sign- function that prints a sign of a number
 *@n: number being checked
 *Return: 1 if n> zero, 0 if n is zero and -1 if n< zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
