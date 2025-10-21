#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
if (size <= 0)
{}
else
{
	int i, n;
for (i = size ; i > 0 ; i--)
{
for (n = size ; n > 0 ; n--)
{
	_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
}
