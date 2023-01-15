#include<stdio.h>
/**
 *main - function that prints the size of various types
 *Return: return 0.
 *
 */
int main(void)
{
printf(stderr, "Size of a char: %d byte(s)\n", sizeof(char));
printf(stderr, "Size of an int: %d byte(s)\n", sizeof(int));
printf(stderr, "size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
printf(stderr, "size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
