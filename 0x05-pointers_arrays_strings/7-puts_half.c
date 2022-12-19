#include"main.h"
#include<string.h>
/**
 *puts_half-prints every other character of a string
 *@str: string
 */
void puts_half(char *str)
{
int count;
int i = strlen(str);
int start = (i - 1) / 2;
for (count = start; count <= i; count++)
{
_putchar(str[count]);
}
_putchar('\n');
}
