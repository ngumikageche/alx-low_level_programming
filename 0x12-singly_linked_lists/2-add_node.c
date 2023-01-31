#include"lists.h"
/**
 *add_node-fucntion that adds a new node at the begining of a list
 *@head: pointer of the first node
 *@str:pointer to a string
 *Return:the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
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
new_node->next = *head;
*head = new_node;
return (new_node);
}
