#include<string.h>
#include<stdio.h>
/**
 *main-function that prints its name followed by a new line
 *@argc: counter
 *@argv: an array of pointer
 *Return: always 0(success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}
return (0);
}
