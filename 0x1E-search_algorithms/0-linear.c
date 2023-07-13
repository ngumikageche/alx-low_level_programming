#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search- func that searches for a value in an array
 * @array: is a pointer to the first element of the array to search in
 * @size: number of elements in an array
 * @value: value to search
 * Return: returns
*/

int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Comparing %d with %d\n", array[i], value);
if (array[i] == value)
{
return (i);  /* Return the index where value is locatet*/
}
}
return (-1);  /* Value not found*/
}
