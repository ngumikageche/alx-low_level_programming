#include<string.h>
/**
 *_strpbrk-a function that searches a string for any of a set of bytes
 *@s:c string to be scanned
 *@accept:string containing the char to match
 *Return:returns the no of bytes
 */
char *_strpbrk(char *s, char *accept)
{
char *res = strpbrk(s, accept);
if (res)
{
return (res);
}
else
{
return (NULL);
}
}
