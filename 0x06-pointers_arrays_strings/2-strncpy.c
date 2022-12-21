#include<string.h>
/**
 *_strncpy-function that copies a string
 *@dest: This is the pointer to the destination array
 *@src:This is the string
 *@n: The number of characters to be copied from source
 *Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
