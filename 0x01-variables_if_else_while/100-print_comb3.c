#include <stdio.h>
/**
 *main - function that prints all possible different combination of two digits
 *Return: always 0 (succes)
 */
int main(void)
{
int num;
int count;
for (count = 48; count <= 57; count++)
{
for (num = 49; num <= 57; num++)
{
if (num != count)
{
putchar(count);
putchar(num);
}
else
{
continue;
}
if (num == 56 && count == 57)
{
break;
}
else
{
putchar(44);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
