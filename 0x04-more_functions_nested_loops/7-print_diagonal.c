#include"main.h"
/**
 *print_diagonal- function that draws a diagonal line on the terminal
 *@n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int count, ws;
if (n <= 0)
{
_putchar('\n');
}
for (ws = 1; ws <= n; ws++)
{
for (count = 0; count < ws; count++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
