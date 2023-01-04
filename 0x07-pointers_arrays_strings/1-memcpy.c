#include<string.h>
/**
 *_memcpy-function that copies the memory area
 *@dest:a pointer to the destination array where the content is to be copied
 *@src:pointer to the source of the data to be copied.
 *@n: the number of bytes to be copied
 *
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
