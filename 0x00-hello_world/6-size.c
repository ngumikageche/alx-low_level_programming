#include<stdio.h>
/**
 *main - function that prints the size of various types
 *Return: return 0.
 *
 */
int main(void)
{
fprintf(stderr, "Size of a char: %d byte(s)\n", sizeof(char));
fprintf(stderr, "Size of an int: %d byte(s)\n", sizeof(int));
fprintf(stderr, "size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
fprintf(stderr, "size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
