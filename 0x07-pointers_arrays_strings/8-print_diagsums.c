#include"main.h"
#include<stdio.h>
/**
 *print_diagsums-prints the sum of the two diag of a sqr matrix of integers.
 *@a:value of the matrix(int)
 *@size:size of the matrix
 */
void print_diagsums(int *a, int size)
{
int x;
int dsum = 0;
int usum = 0;
for (x = 0; x < size; x++)
{
dsum += *(a + ((size * x) + x));
usum += *(a + (size - 1) * (x + 1));
}
printf("%d, %d\n", dsum, usum);
}
