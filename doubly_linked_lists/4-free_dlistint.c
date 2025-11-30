#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free the list
 *
 * @head: pointer
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;
while (head != NULL)
{
tmp = tmp->next;
free(head);
head = tmp;
}
}
