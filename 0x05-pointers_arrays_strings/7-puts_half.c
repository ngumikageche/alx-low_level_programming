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
int length;
int i = strlen(str);
while (str[c] != '\0')
{
c++;
}
if (i % 2 != 0)
{
length = (i - 1) / 2;
}
else
{
length = (i / 2);
}
for (count = length; count <= i; count++)
{
_putchar(str[count]);
}
_putchar('\n');
}
