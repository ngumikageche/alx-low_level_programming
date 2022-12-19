#include"main.h"
#include<string.h>
/**
 *puts2-prints every other character of a string
 *@str: string
 */
void puts2(char *str)
{
int count;
int i = strlen(str);
for (count = 0; count <= i; count++)
{
if (count % 2 == 0)
{
_putchar(str[count]);
}
}
_putchar('\n');
}
