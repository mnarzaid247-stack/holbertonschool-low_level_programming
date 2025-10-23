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
char *m;
char x;
int j;

while (*s != '\0')
{
i++;
s++;
}
m = s - 1;
for (j = 0; j < i / 2 ; m--, r++, j++)
{
x = *r;
*r = *m;
*m = x;
}
}
