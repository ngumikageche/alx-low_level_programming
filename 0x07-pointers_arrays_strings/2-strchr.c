#include<string.h>
/**
 *_strchr-function that locates a character in a string
 *@s:is the (string to be scanned
 *@c:is the character to be searched in str
 *Return:a pointer to the first occurence of the char c in the str s
 */

char *_strchr(char *s, char c)
{
return (strchr(s, c));
}
