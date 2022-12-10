#include <stdio.h>
/**
 *main - function that prints all possible combination of a single digit number
 *Return: always 0 (succes)
 */
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num != 57)
{
putchar(44);
}
}
putchar('\n');
return (0);
}
