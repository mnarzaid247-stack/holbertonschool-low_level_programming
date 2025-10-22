#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
if (size <= 0)
	_putchar('\n');
else
{
	int i;
	int n = 1;
	int j;

while (size >= n)
	{
	for (j = size - n ; j > 0 ; j--)
	{
	_putchar(' ');
	}
	for (i = 1 ; i <= n ; i++)
	{
	_putchar('#');
	}
	_putchar('\n');
	n++;
	}
}
}
