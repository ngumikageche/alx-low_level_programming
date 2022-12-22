#include<string.h>
#include"main.h"
/**
 *string_toupper- function that changes lowercse to uppercase
 *@str: String to be changed
 *Return: Return the converted string in uppercase format
 */
char *string_toupper(char *str)
{
int ind;
  /* if current ch is lowercase alphabet then convert to uppercase */
for (ind = 0; str[ind] != '\0'; ind++)
{
if (str[ind] >= 'a' && str[ind] <= 'z')
{
str[ind] = str[ind] - 32;
}
}
return (str);
}
