#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: character
 * @f: function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
	return;
if (name == NULL)
	return;
f(name);
}
