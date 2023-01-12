#include<stdlib.h>
/**
 *_strdup- returns a pointer to a newly allocated space in memory
 *@str:string
 *Return:Null if str = NULL
 */
char *_strdup(char *str)
{
char *arr;
int i, j;
int count = 0;
/*if str = NULL */
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
count = count + 1;
}
arr = malloc(sizeof(char) * count + 1);
if (arr == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; j++)
{
arr[j] = str[j];
}
arr[j] = '\0';
return (arr);
}
