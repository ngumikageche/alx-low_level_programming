#include"main.h"
/**
 *jack_bauer-function that prints every minute of the day from 00:00-23:59
 */
void jack_bauer(void)
{
  /* variable to rep each character from hrs to minutes i.e Hh:Mm */
int H, h, M, m;
/* loop control variable for h */
int count;
for (H = 48; H < 51; H++)
{
/* if function that re assign h to 3 once H is 2 */
if (H != 50)
{
count = 57;
}
else
{
count = 51;
}
for (h = 48; h <= count; h++)
{
/*nested loop for minutes */
for (M = 48; M <= 53; M++)
{
/* First loop for minutes */
for (m = 48; m <= 57; m++)
{
_putchar(H);
_putchar(h);
_putchar(58);
_putchar(M);
_putchar(m);
_putchar('\n');
}
}
}
}
}
