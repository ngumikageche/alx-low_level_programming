#include"lists.h"
/**
 *sum_listint-return the sum of all the data
 *@head:first node
 *Return:the sum when it reaches the end of the list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
/* pointer the head node */
listint_t *current = head;
while (current != NULL)
{
/*iterate through the list, adding each value 'n' to the 'sum' var*/
sum += current->n;
current = current->next;
}
return (sum);
}
