#include"main.h"
/**
 *print_square-function that prints a square, followed by a new line
 *@size: the size of the square
 */
void print_square(int size)
{
int count, hash;
if (size <= 0)
{
_putchar('\n');
}
for (count = 1; count <= size; count++)
{
for (hash = 1; hash <= size; hash++)
{
_putchar(35);
}
_putchar('\n');
}
}
