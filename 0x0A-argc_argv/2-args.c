#include<string.h>
#include<stdio.h>
/**
 *main-function that prints all args it receives
 *@argc: counter
 *@argv: an array of pointer
 *Return: always 0(success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
