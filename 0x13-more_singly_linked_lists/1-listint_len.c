#include"lists.h"
/**
 *listint_len- counts the number of elements in a linked listint_t list.
 *@h:first node
 *Return: the number of elements in a linked list_t list
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
const listint_t *current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
