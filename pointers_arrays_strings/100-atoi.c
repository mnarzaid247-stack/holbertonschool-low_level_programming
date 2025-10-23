#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int i = 0;
int n = 1;
int r = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
{
n = n * -1;
}
if (s[i] >= '0' && s[i] <= '9')
{
if (n < 0)
r = r * 10 - (s[i] - '0');
else
r = r * 10 + (s[i] - '0');
}
else if (r > 0)
{
break;
}
i++;
}
if (i == 0)
return (0);
else
return (r);
}
