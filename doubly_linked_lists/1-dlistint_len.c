#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - count the elemnets
 *
 * @h: pointer
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
const dlistint_t *tmp = h;
while (tmp != NULL)
{
i++;
tmp = tmp->next;
}
return (i);
}
