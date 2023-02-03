#include "lists.h"
/**
 *free_listint2-func that frees a listint_t
 *@head:double pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
listint_t *current, *next;
if (head == NULL)
return;
current = *head;
/*loop to traverse the linked list, freeing each node*/
/*and updating the 'next' pointer until it reaches the end of the list*/
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = NULL;
}
