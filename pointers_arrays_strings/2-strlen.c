#include "main.h"

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
	i++;
s++;
}
	return (i);
}
