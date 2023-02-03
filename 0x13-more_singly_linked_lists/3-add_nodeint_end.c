#include"lists.h"
/**
 *add_nodeint_end-adds a new node at the end of a listint_t list.
 *@head:pointer to a pointer of the start of the list
 *
 *@n:int for the new node
 *Return: if the function fails - NULL
 *       otherwise - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *current;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new;
return (new);
}
