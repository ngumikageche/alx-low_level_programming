#include"main.h"

/**
 *more_numbers- prints ten times the numbers from 0-14
 */
void more_numbers(void)
{
char num;
int count;
for (num = 0; num <= 9; num++)
{
for (count = 0; count <= 14; count++)
{
if (count > 9)
{
_putchar((count / 10) + '0');
}
_putchar((count % 10) + '0');
}
_putchar('\n');
}
}
