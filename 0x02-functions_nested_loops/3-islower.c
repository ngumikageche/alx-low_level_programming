#include<stdio.h>
#include<ctype.h>
/**
 *_islower- function that checks for lowercase character
 *@c: character
 *Return: 1 if character is lowercase and 0 if otherwise
 */
int _islower(int c)
{
if (islower(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
