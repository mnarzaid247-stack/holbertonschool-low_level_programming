#include "main.h"

/**
 * rev_string - revers a string
 *
 * @s: character
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int i = 0;
char *r = s;

while (*s != '\0')
{
i++;
s++;
}
char *m = s - 1;
char x;
int j = i / 2;
for (; j != 0 ; m--, r++, j--)
{
x = *r;
*r = *m;
*m = x;
}
}
