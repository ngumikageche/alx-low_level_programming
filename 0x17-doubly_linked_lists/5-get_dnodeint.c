#include"lists.h"
/**
 *get_dnodeint_at_index-function that gets the nth node
 *@head: first node
 *@index: index node we want to get
 *Return:returns the nth node of a doubly linked list of integers
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;
while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (i == index)
{
return (current);
}
else
{
return (NULL);
}
}
