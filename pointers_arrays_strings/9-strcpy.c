#include "main.h"

char *_strcpy(char *dest, char *src)
{
int i = 0;
int j = 0;
while (src[i] != '\0')
{
i++;
}
for (; j <= i ; j++)
{
dest[j] = src[j];
}
return (dest);
}
