#include <stdio.h>
/**
 *main - function that prints the alphabet in lowercase
 *Return: always 0 (success).
 */
int main(void)
{
char ch;
for (ch = 122; ch >= 97; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
