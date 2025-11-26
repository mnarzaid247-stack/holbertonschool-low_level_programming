#include "lists.h"

/**
 * list_len - count the nodes
 *
 * @h: const pointer list
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
const list_t *tmp = h;
while (tmp != NULL)
{
tmp = tmp->next;
n++;
}
return (n);
}
