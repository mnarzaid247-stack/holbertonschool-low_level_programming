#include "main.h"

/**
 * count the litters
 *
 * return an int
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
	i++;
s++;
}
	return (i);
}
