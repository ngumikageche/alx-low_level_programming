#include"lists.h"
/**
 *sum_dlistint-function that returns the sum of all data(n)
 *@head:pointer to the first node
 *Return:the sum of all the data (n) 
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return sum;
}
