#include "main.h"
#define NULL ((void *)0)

/**
 * _strchr - function that locates a character in a string
 *
 * @s: character
 * @c: character
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0 ;; i++)
if (s[i] == c)
{
	return ((s+i));
}
	else if (s[i] == '\0')
	return (NULL);
}
