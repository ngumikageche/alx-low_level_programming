#include"main.h"
#include<string.h>
/**
 *print_rev- function that prints a string in reverse
 *@s:string
 */
void print_rev(char *s)
{
int count = 0;
int stl = strlen(s);
int ind;
while (s[count] != '\0')
{
count++;
}
for (ind = stl - 1; ind >= 0; ind--)
{
_putchar(s[ind]);
}
_putchar('\n');
}
