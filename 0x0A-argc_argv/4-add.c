#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 *main-function that multiplies 2 no.
 *@argc: counter
 *@argv: an array of pointer
 *Return: always 0(success)
 */
int main(int argc, char *argv[])
{
int i, x;
int res = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
x = strtol(argv[i], NULL, 10);
res = (res + x);
}
printf("%d\n", res);
}
else
{
printf("Error\n");
}
return (0);
}
