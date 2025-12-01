#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a node
 *
 * @head: pointer
 * @index: integer
 *
 * Return: integer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp = *head;
dlistint_t *old = *head;
dlistint_t *new;
if (*head == NULL)
return (-1);
if (index == 0)
{
new = old->next;
free(old);
if (new != NULL)
new->prev = NULL;
*head = new;
return (1);
}
while (i < index)
{
tmp = tmp->next;
if (tmp == NULL)
	return (-1);
i++;
}
if (tmp == NULL)
return (-1);
if (tmp->next != NULL)
{
tmp->next->prev = tmp->prev;
tmp->prev->next = tmp->next;
free(tmp);
}
else
{
tmp->prev->next = NULL;
free(tmp);
}
return (1);
}
