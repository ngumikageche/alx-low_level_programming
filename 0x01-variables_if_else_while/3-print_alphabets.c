#include <stdio.h>
/**
 *main - function that prints the alphabet in lowercase
 *Return: always 0 (success).
 */
int main(void)
{
char ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
