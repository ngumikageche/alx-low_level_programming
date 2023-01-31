#include"main.h"
/**
 *str_concat- that concatenates two strings
 *@s1:first string
 *@s2:second string
 *Return:NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
  /**
   *This function takes two strings str1 and str2 as input.
   *It calculates their lengths using strlen() and adds 1 to the
   *sum to accommodate for the null terminator. Then,
   *it uses malloc() to allocate memory for the result string
   *with the size equal str1 and str2 plus 1 for the null terminator.
   *to the sum of lengths of The function uses strcpy() to copy
   * str1 into the result string, and then strcat()
   *to concatenate str2 to it. Finally,
   *the function returns the pointer to the result string.
   */
int len1 = strlen(s1);
int len2 = strlen(s2);
int len = len1 + len2 + 2;
char *result = malloc(len * sizeof(char));
strcpy(result, s1);
strcat(result, s2);
if (result == NULL)
return (NULL);
else
return (result);
}
