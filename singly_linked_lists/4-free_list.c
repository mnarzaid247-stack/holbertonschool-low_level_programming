#include "lists.h"

/**
 * free_list - free the list
 *
 * @head: pointer
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *tmp;
tmp = head;
while (head != NULL)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
