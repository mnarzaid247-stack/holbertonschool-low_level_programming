#include "main.h"

int _atoi(char *s)
{
int i = 0;
int n = 1;
int j;
int r = 0;
while (s[i] != '\0')
{
	if (s[i] == '-')
	{
	n = n * -1;
	}
		for (j = 48 ; j <= 57 ;j++)
		if (s[i] == j)
		{
		 	r = r * 10 + (s[i] - '0');
		}

i++;
}
if (i == 0)
return (0);
else
return (r * n);
}
