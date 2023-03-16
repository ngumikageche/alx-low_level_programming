#include "lists.h"
/**
 *add_dnodeint-a function that adds a new node at the beginning
 *             of a dlistint_t list
 *
 *@head: pointer to a pointer to the head node of the list
 *@n: Integer value to be stored in the new node
 *
 *Return: Pointer to the new node, or ULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = NULL;
if (head == NULL)
{
return (NULL);
}
/* allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
/* initialize the new node */
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
/*check if the list is not empty */
if (*head != NULL)
{
(*head)->prev = new_node;
}
/*update the head pointer */
*head = new_node;
return (new_node);
}
