#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: character
 *
 * Return: character
 */
char *_strdup(char *str)
{
int i;
char *p;
int j;
if (str == NULL)
	return (NULL);
for (j = 0 ; str[j] != '\0' ; j++)
{
}
p = malloc(j + 1);
if (p == NULL)
	return (NULL);
for (i = 0 ; i <= j ; i++)
	p[i] = str[i];
return (p);
}
