#include"lists.h"
/**
 *print_list-  function that prints all the elements of a list_t list.
 *@h:node
 *Return:number of nodes of type list_t
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
if (current->str == NULL)
{
printf("[%u] %s\n", current->len, "(nil)");
}
else
{
printf("[%u] %s\n", current->len, current->str);
}
count++;
current = current->next;
}
return (count);
}
