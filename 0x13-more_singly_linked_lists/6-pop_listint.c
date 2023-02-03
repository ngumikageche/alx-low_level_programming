#include"lists.h"
/**
 *pop_listint-deletes the head node of a listint_t linked list,
 *            and returns the head node’s data (n).
 *            It then takes a double pointer to the head node of the list
 *            'listint_t' and returns the head node's data.
 *            if the head node exists it sets a pointer 'new_head' to the node,
 *            stores the head node data in a variable 'n'
 *            frees the head node and sets the head of the list
 *            to the next node.
 *@head:double pointer to the node
 *
 *Return:if node is == NULL it returns 0
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *new_head;
if (*head == NULL)
{
return (0);
}
new_head = (*head)->next;
n = (*head)->n;
free(*head);
*head = new_head;
return (n);
}
