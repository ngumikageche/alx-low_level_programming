#include"lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, int n)
{
  dlistint_t *new_node, *current;

  /* Allocate memory for the new node */
  new_node = malloc(sizeof(dlistint_t));
  if (new_node == NULL)
    return (NULL);

  /* Initialize the new node */
  new_node->n = n;
  new_node->next = NULL;

  /* If the list is empty, make the new node the head */
  if (*head == NULL) {
    new_node->prev = NULL;
    *head = new_node;
    return (new_node);
  }

  /* Traverse the list to find the last node */
  current = *head;
  while (current->next != NULL)
    current = current->next;

  /* Add the new node to the end of the list */
  new_node->prev = current;
  current->next = new_node;

  return (new_node);
}
