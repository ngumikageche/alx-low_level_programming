#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
/**
 *print_strings-fucntion that prints nums followed by a new line
 *@separator:the string to be printed
 *@n: number of ints
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned  int ind;
char *str;
va_list arg;
va_start(arg, n);
for (ind = 0; ind < n; ind++)
{
str = va_arg(arg, char *);
if (separator == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
if (ind < n - 1 && separator != NULL)
{
printf("%s", separator);
}
va_end(arg);
}
}
printf("\n");
}
