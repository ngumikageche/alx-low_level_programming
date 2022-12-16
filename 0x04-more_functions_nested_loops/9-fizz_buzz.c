
#include<stdio.h>
/**
 *fizz_buzz-function that print Fizz,Buzz , Fizzbuzz
 */
void fizz_buzz(void)
{
int count;
for (count = 1; count <= 100; count++)
{
if (count % 3 == 0 && count % 5 == 0)
{
printf("FizzBuzz");
putchar(32);
}
else if (count % 3 == 0)
{
printf("Fizz");
putchar(32);
}
else if (count % 5 == 0)
{
printf("Buzz");
putchar(32);
}
else
{
printf("%d", count);
putchar(32);
}
}
putchar('\n');
}
/**
 *main - function that calls the function fizz_buzz
 *Return: returns 0;
 */
int main(void)
{
fizz_buzz();
return (0);
}
