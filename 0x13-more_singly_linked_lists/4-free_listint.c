#include"lists.h"
/**
 *free_listint-func that frees a listint_t
 *@head:pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
listint_t *node;
while (head)
{
node = head->next;
free(head);
head = node;
}
}
