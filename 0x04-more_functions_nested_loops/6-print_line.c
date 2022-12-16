#include"main.h"
/**
 *print_line- function that prints a straight line
 *@n: number of times the character _ should be printed
 */
void print_line(int n)
{
int ctr;
for (ctr = 1; ctr <= n; ctr++)
{
if (n != 0)
{
_putchar(95);
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
