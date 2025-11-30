#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insirting a node
 *
 * @h: pointer
 * @idx: integer
 * @n: integer
 *
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *tmp = *h;
unsigned int i = 0;
if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
if (new == NULL)
	return (NULL);
new->n = n;
new->prev = NULL;
new->next = NULL;
while (i != idx - 1 && tmp != NULL)
{
tmp = tmp->next;
i++;
}
if (tmp == NULL)
return (NULL);
if (i != idx - 1)
return (NULL);
if (tmp->next == NULL && i == idx - 1)
{
new->next = NULL;
tmp->next = new;
new->prev = tmp;
}
else
{
new->next = tmp->next;
new->prev = tmp;
tmp->next->prev = new;
tmp->next = new;
}
return (new);
}
