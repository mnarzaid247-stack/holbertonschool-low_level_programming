#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adding a node
 *
 * @head: pointer
 * @n: integer
 *
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *end = malloc(sizeof(dlistint_t));
dlistint_t *tmp = *head;
if (end == NULL)
	return (NULL);
end->n = n;
end->next = NULL;
if (*head == NULL)
{
end->prev = NULL;
*head = end;
return (end);
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = end;
end->prev = tmp;
}
return (end);
}

