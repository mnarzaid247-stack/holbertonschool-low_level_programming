#include "main.h"

/**
 * str_concat -  concatenates two strings
 *
 * @s1: character
 * @s2: character
 *
 * Return: character
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int i;
int j;
int k;
int l;
int m;
if (s1 == NULL)
{
	i = 0;
s1 = "";
}
	else
{
for (i = 0 ; s1[i] != '\0' ; i++)
{
}
}
if (s2 == NULL)
{
	j = 0;
s2 = "";
}
	else
{
for (j = 0 ; s2[j] != '\0' ; j++)
{
}
}
k = i + j + 1;
p = malloc(k);
if (p == NULL)
	return (NULL);
for (l = 0 ; l < i ; l++)
p[l] = s1[l];
for (m = 0 ; l < k ; l++, m++)
p[l] = s2[m];
p[l] = '\0';
return (p);
}
