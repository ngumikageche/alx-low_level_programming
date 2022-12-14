#include"main.h"
/**
 *print_alphabet_x10- prints letters from a-z using a loop and ascii characters
 */
void print_alphabet_x10(void)
{
char letter;
int count;
/* prints the aphabets 10 times */
for(count = 0; count <= 9; count++)
{     
/* first loop to print the letters */
for (letter = 97; letter <= 122; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
