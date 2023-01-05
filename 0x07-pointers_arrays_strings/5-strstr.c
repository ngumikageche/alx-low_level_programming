#include<string.h>
#include"main.h"
/**
 *_strstr-function that locates a substring
 *@haystack: is the main C string to be scanned
 *@needle: the small string to be searched with-in haystack string.
 *Return:pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *res = strstr(haystack, needle);
if (res)
{
return (res);
}
return (NULL);
}
