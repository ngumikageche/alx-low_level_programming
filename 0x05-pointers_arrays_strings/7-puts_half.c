#include"main.h"
#include<string.h>
/**
 *puts_half-prints every other character of a string
 *@str: string
 */
void puts_half(char *str)
{
int c = 0;
int count;
int i = strlen(str);
while (str[c] != '\0')
c++;
for (count = (i + 1) / 2; count <= i; count++)
{
_putchar(str[count]);
}
_putchar('\n');
}
