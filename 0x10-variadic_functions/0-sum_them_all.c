#include <stdarg.h>
/**
 *sum_them_all-function tht sums of all its parameters
 *@n:number of parameters
 *Return: if n == 0 it returns 0 else the sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int ind;
int sum = 0;
va_list args;
va_start(args, n);
if (n == 0)
{
return (0);
}
for (ind = 0; ind < n; ind++)
{
sum += va_arg(args, unsigned int);
}
va_end(args);
return (sum);
}
