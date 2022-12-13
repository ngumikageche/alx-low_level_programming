#include"main.h"
/**
 *print_alphabet- prints letters from a-z using a loop and ascii characters
 */
void print_alphabet(void)
{
char letter;
for (letter = 97; letter <= 122; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
