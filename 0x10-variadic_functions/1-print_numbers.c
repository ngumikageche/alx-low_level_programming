#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
/**
 *print_numbers-fucntion that prints nums followed by a new line
 *@separator:the string to be printed
 *@n: number of ints
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned  int ind;
int num;
va_list arg;
va_start(arg, n);
for (ind = 0; ind < n; ind++)
{
num = va_arg(arg, unsigned int);
if (separator == NULL)
{
return;
}
else
{
printf("%d", num);
if (ind < n - 1)
{
printf("%c", *separator);
}
}
va_end(arg);
}
printf("\n");
}
