#include "main.h"

void print_triangle(int size)
{
if (size <= 0)
	_putchar('\n');
else
{
	int i;
	int n = 0;
	while (size >= n)
	{
for(i = 0 ; i > size ; i++)
_putchar('#');
_putchar('\n');
	}
}
}
