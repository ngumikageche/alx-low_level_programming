#include <stdio.h>
/**
 *main - function that prints all possible different combination of two digits
 *Return: always 0 (succes)
 */
int main(void)
{
int num;
int count = 0;
int ctr = 9;
int ctr1 = 1;
while (ctr >= 0)
{
for (num = ctr1; num <= 9; num++)
{
putchar(count + '0');
putchar(num + '0');
if (count >= 8 && num >= 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
ctr--;
count++;
ctr1++;
}
putchar('\n');
return (0);
}
