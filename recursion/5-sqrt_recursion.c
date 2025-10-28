#include "main.h"

/**
 * ac - returning
 *
 * @n: integer
 * @i: integer
 *
 * Return: integer
 */
int ac(int n, int i)
{
if (i * i == n)
	return (i);
i++;
return (ac(n, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
int i = 1;
if ((i *i) == n)
	return (i);
else
if ((i *i) > n)
	return (-1);
return (ac(n, 1));
}
