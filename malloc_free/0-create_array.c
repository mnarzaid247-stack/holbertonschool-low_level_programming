#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: unsigned integer
 * @c: character
 *
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
return (NULL);
char *p = malloc(size);
if (p == 0)
	return (NULL);
for (i = 0 ; i < size ; i++)
	p[i] = c;
return (p);
}
