#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adding new node
 *
 * @head: pointer
 * @str: character
 *
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
unsigned int i = 0;
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new->str);
return (NULL);
}
while (str[i] != '\0')
i++;
new->len = i;
new->next = *head;
*head = new;
return (new);
}
