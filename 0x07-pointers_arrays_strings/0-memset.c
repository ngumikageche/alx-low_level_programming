#include<string.h>
/**
 *_memset-function that fills memory with a constant byte
 *@s:pointer to the block of memory to fill
 *@n:number of bytes to be set to the value
 *@b:the value to be set
 *
 *Return:a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
