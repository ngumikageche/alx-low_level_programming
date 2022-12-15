#include"main.h"
#include<stdio.h>
/**
 *print_numbers- prints nums from 0-9 using a loop and ascii characters
 */
void print_numbers(void)
{
char num;
for (num = 48; num <= 57; num++)
{
_putchar(num);
}
_putchar('\n');
}
