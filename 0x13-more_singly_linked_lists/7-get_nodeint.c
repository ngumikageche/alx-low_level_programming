#include"lists.h"
/**
 *get_nodeint_at_index-function that returns nth node of the linked list
 *@head:pointer to first node
 *@index:zero based index of the node
 *Return:nth node of the linked list or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
/* counter that keeps track of the index of the current node*/
unsigned int count = 0;
/* pointer that moves thro the linked list one node at a time */
listsint_t *current = head;
/* loop to iterate through the linked list */
while (current != NULL)
{
if (count == index)
{
return (current);
}
count++
current = current->next;
}
return (NULL);
}
