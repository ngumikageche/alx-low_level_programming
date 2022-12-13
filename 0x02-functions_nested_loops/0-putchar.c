#include<stdio.h>
#include"main.h"
/**
 *main - function that prints _putchar
 *Return: returns 0
 */
int main(void)
{
  /**
   *array that uses ASCII CODE to output the word _putchar
   */
char word[] = {95, 112, 117, 116, 99, 104, 97, 114};
int count;
for (count = 0; count <= 7; count++)
{
_putchar(word[count]);
}
_putchar('\n');
return (0);
}
