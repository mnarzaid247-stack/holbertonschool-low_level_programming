#include "main.h"

/**
 * puts_half - prints half a string
 *
 * @str: string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int i = 0;
int j = 0;
int m;
for (; str[i] != '\0' ; i++)
j++;
if (j % 2 == 0)
{
	m = j / 2;
for (; str[m] != '\0' ; m++)
	_putchar(str[m]);
}
else
{
m = (j + 1) / 2;
for (; str[m] != '\0' ; m++)
_putchar(str[m]);
			}
_putchar('\n');
}
