#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @c: chraracter
 *
 * Return: character
 */
char *leet(char *c)
{
int i;
char l [] = {"AaEeOoTtLl"};
char n [] = {"4433007711"};
int j;
for (i = 0 ; c[i] != '\0' ; i++)
{
for (j = 0 ; l[j] != '\0' ; j++)
if (c[i] == l[j])
	c[i] = n[j];
}
return (c);
}
