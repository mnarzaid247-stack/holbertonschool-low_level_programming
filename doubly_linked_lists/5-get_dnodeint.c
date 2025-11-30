#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - return the list
 *
 * @head: pointer
 * @index: integer
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp = head;
unsigned int count = 0;
while (tmp != NULL)
{
if (count == index)
	return (tmp);
else
{
tmp = tmp->next;
count++;
}
}
return (NULL);
}
