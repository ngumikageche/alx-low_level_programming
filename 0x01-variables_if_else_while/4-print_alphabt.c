#include <stdio.h>
/**
 *main - function that prints the alphabet in lowercase bt skips e and q
 *Return: always 0 (success).
 */
int main(void)
{
char ch;
for (ch = 97; ch <= 122; ch++)
{
if (ch != 101 && ch != 113)
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
