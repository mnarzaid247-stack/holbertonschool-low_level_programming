#include "lists.h"
#include <stdio.h>

/**
 * print_list - printing the lists
 *
 * @list_t: type of the list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
const list_t *tmp = h;
while (tmp != NULL)
{
if (tmp->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", tmp->len, tmp->str);
i++;
tmp = tmp->next;
}
return (i);
}
