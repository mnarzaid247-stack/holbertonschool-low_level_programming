#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: character
 * @src: character
 * @n: integer
 *
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int m = 0;
while (dest[j] != '\0')
{
j++;
}
for (; m != n && src[m] != '\0' ; m++, j++)
{
dest[j] = src[m];
}
dest[j] = '\0';
return (dest);
}
