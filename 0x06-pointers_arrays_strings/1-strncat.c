#include<string.h>
/**
 *_strncat-function that concatenate two strings
 *@dest:pointer to the destination array
 *@src:This is the string to be appended
 *@n:this is the maximum number of characters to be appendend
 *Return: a pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
