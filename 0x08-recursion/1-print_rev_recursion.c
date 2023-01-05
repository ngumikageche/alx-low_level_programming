#include<string.h>
#include"main.h"
#include<stdio.h>
/**
 *_print_rev_recursion-dunction that prits a string in reverse
 *@s:string
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
