#include"lists.h"
/**
 *add_node_end-fucntion that adds a new node at the end of a list
 *@head: pointer of the first node
 *@str:string to be added
 *Return:the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
/* create a node */
char *dup;
int len;
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
/*dublicating the str pointer using strdup */
dup = strdup(str);
if (dup == NULL)
{
free(new_node);
return (NULL);
}
for (len = 0; str[len]; len++)
new_node->str = dup;
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
list_t *last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}
return (*head);
}
