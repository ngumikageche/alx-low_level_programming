#include<stdlib.h>
/**
 *create_array-function creates array of chars, % init it with a specific char
 *@size:size in bytes
 *@c:character
 *Return:returns a pointer to the array, or nuLL if it fains
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned  int i;
if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);
if (arr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
arr[i] = c;
}
}
return (arr);
}
