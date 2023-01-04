#include<string.h>
/**
 *_strspn-gets the length of aprefix substring
 *@s:main c string to be scanned
 *@accept:the str containing the list of characters to match s
 *Return:the no of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
