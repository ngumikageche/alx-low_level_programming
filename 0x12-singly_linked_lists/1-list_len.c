#include"lists.h"
/**
 *list_len- counts the number of elements in a linked list_t list.
 *@h:first node
 *Return: the number of elements in a linked list_t list
 */x
size_t list_len(const list_t *h)
{
int count = 0;
const list_t *current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
