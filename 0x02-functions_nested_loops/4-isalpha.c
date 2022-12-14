#include<stdio.h>
#include<ctype.h>
/**
 *_isalpha- function that checks for alphabetic character
 *@c: character
 *Return: 1 if character is lowercase and 0 if otherwise
 */
int _isalpha(int c)
{
if (isalpha(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
