#include<stdlib.h>
/**
 *malloc_checked-function that allocates memory using malloc
 *@b:number of bytes you need to allocated
 *Return: pointer to allocated memory or exit with 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
