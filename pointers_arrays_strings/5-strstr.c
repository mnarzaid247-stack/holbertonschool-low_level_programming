#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: character
 * @needle: character
 *
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int k = 0;
if (*needle == '\0')
	return (haystack);
for (i = 0 ; haystack[i] != '\0' ; i++)
{
	k = 0;
if (haystack[i] == needle[k])
{
	for (k = 0 ; haystack[i + k] == needle[k] ; k++)
	{
	}
}
if (needle[k] == '\0')
return (haystack + i);
}
return (0);
}
