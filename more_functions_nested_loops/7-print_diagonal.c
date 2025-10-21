#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
int i = 1;

if (n <= 0)
_putchar('\n');
else
{
while (n > 0)
{
if (i != n)
{
	int m = 0;

	while (m < i)
	{
		putchar(' ');
m++;
	}
}
n--;
i++;
_putchar('\\');
_putchar('\n');
}
}
}
