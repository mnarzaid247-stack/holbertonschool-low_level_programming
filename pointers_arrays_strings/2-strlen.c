#include "main.h"

/**
 * _strlen - count the litters
 *@s: pointer
 *
 * Return: an int
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
