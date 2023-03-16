#include"lists.h"
/**
 *free_dlistint-function that frees a list
 *@head:pointer to the first node
 *
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
