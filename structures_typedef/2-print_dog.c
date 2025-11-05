#include "dog.h"

/**
 * print_dog -  prints a struct
 *
 * @d: struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
if (d->name == NULL)
	d->name = "(nil)";
if (d->owner == NULL)
	d->owner = "(nil)";
printf("Name: %s \n Age: %.2f \n Owner: %s ", d->name, d->age, d->owner);
}
