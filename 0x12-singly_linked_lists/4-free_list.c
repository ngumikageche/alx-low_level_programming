#include"lists.h"
/**
 *free_list-frees a list_t list
 *@head:a pointer to the list
 */
void free_list(list_t *head)
{
list_t *current = head;
while (current != NULL)
{
list_t *next = current->next;
free(current);
current = next;
}
}
