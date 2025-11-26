#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adding node at the end
 *
 * @str: character
 * @head: pointer to a list
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmp = *head;
unsigned int n = 0;
list_t *end = malloc(sizeof(list_t));
if (end == NULL)
return (NULL);
if (str == NULL)
{
free(end);
return (NULL);
}
else
end->str = strdup(str);
while (str[n] != '\0')
n++;
end->len = n;
if (*head == NULL)
{
*head = end;
end->next = NULL;
return (end);
}
end->next = NULL;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = end;
return (end);
}
