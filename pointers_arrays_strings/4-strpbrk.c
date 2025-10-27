#include "main.h"
#define NULL ((void *)0)

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: character
 * @accept: character
 *
 * Return: character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
while (s[i] != '\0')
{
	j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
	return (s + i);
else
	j++;
}
i++;
}
return (NULL);
}
