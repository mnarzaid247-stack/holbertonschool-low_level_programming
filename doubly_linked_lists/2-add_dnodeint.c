#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - add node
 *
 * @head: pointer
 * @n: integer
 *
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
