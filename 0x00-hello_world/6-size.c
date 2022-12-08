#include<stdio.h>
/**
 *main - function that prints the size of various types
 *Return: return 0.
 *
 */
int main(void)
{
char charType;
int integerType;
long int liType;
long long int llType;
float floatType;
printf("Size of char: %d byte(s)\n", sizeof(charType));
printf("Size of int: %d byte(s)\n", sizeof(integerType));
printf("size of long int: %d byte(s)\n", sizeof(liType));
printf("size of long long int: %d byte(s)\n", sizeof(llType));
printf("size of float: %d byte(s)\n", sizeof(floatType));
return (0);
}
