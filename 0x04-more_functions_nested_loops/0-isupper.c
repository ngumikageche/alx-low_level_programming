#include<ctype.h>
/**
 *_isupper- function that checks if a character is in upercase or not
 *@c: chacter to check
 *Return: returns 1 if c is ippercase and 0 if otherwise
 */
int _isupper(int c)
{
if (isupper(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
