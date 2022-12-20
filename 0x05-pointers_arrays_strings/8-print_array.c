#include<stdio.h>
#include "main.h"
/**
 *print_array-function that prints elements of an array of integers
 *@a: array
 *@n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
printf("\n");
}
