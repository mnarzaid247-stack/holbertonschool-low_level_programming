#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: chararcter
 *
 * Return: character
 */
char *cap_string(char *s)
{
	int i = 0;
	char m;
if (s[i] >= 97 && s[i] <= 122)
s[i] = s[i] - 32;
for (; s[i] != '\0' ; i++)
{
if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
	s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
	s[i] == '}' || s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
{
if (s[i + 1] != '\0' && s[i + 1] >= 97 && s[i + 1] <= 122)
{
m = s[i + 1] - 32;
s[i + 1] = m;
}
}
}
return (s);
}
