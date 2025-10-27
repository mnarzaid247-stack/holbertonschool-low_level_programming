#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: character
 * @accept: character
 *
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;
while (s[i] != '\0')
{
	j = 0;
while (s[i] != accept[j])
{
	if (accept[j] != '\0')
	j++;
	else
		return (i);
}
	i++;
}
return (i);
}
