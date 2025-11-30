#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum of numbers
 *
 * @head: pointer
 *
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;
int count = 0;
while (tmp != NULL)
{
count = count + tmp->n;
tmp = tmp->next;
}
return (count);
}
