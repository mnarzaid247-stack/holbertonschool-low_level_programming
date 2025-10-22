#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 *@s: character
 *
 *Return: nothing
 */
void print_rev(char *s)
{
int i = 0;
char *r = s;
while (*s != '\0')
{
	i++;
	s++;
}
for (; i > 0 ; i--)
{
_putchar(r[i - 1]);
}
_putchar('\n');
}
