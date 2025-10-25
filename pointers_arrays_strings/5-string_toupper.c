#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: character
 *
 * Return: character
 */
char *string_toupper(char *s)
{
int i = 0;
char c;

for (; s[i] != '\0' ; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
	c = s[i];
c = c - 32;
s[i] = c;
}
}
return (s);
}
