#include"main.h"
#include<string.h>
/**
 *print_rev- function that returns the length of a string
 *@s:string
 */
void print_rev(char *s)
{
int count;
int stl = strlen(s);
for (count = stl; count >= 0; count--)
{

_putchar(s[count]);
  }
_putchar('\n');
}
