#include<stdio.h>
#include"main.h"
/**
 *print_to_98- function that prints all natural numbers from n to 98
 *@n: number (passed number by function)
 */
void print_to_98(int n)
{
int count;
if (n < 98)
{
for (count = n; count < 99; count++)
{
printf("%d", count);
if (count == 98)
{
break;
}
putchar(',');
putchar(' ');
}
}
else
{
for (count = n; count >= 98; count--)
{
printf("%d", count);
if (count == 98)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
