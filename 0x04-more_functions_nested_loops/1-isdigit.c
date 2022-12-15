#include<ctype.h>
/**
 *_isdigit- function that checks if a character is a digit or not
 *@c: chacter to check
 *Return: returns 1 if c is digit and 0 if otherwise
 */
int _isdigit(int c)
{
if (isdigit(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
