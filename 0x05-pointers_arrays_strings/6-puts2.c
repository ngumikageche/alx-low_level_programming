#include"main.h"
/**
 *puts2-prints every other character of a string
 *@str: string
 */
void puts2(char *str)
{
int count;
for (count = 0; count <= 9; count++)
{
if (count % 2 == 0)
{
_putchar(str[count]);
}
}
_putchar('\n');
}
