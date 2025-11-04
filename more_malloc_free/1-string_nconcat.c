#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: character
 * @s2: character
 * @n: unsigned integer
 *
 * Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int k;
unsigned int j;
unsigned int m;
char *p;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0 ; s1[i] != '\0' ; i++)
{
}
for (m = 0 ; s2[m] != '\0' ; m++)
{
}
if (n <= m)
p = malloc(i + n + 1);
else
{
n = m;
p = malloc(i + n + 1);
}
if (p == NULL)
	return (NULL);
for (k = 0 ; k < i ; k++)
{
p[k] = s1[k];
}
for (j = 0 ; j < n ; j++, i++)
{
p[i] = s2[j];
}
p[i] = '\0';
return (p);
}
