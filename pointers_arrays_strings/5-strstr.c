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
int j;
int k;
for (i = 0 ; haystack[i] != '\0' ; i++)
{
for (j = 0 ; needle[j] != '\0' ; j++)
{
if (haystack[i] == needle[j])
{
	for (k = 0 ; haystack[i + k] == needle[k] ; k++)
	return (haystack + i);
}
}
}
return (0);
}
