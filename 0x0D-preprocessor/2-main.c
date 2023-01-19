#include<stdio.h>
#include<string.h>
/**
 *main-print the name of the file of the program
 *    was compiled from, followed by a new line
 *Return:Always success 0
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
