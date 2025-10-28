#include "main.h"

/**
 * ac - retirning
 *
 * @n: integer
 * @i: integer
 *
 * Return: integer
 */
int ac(int n, int i)
{
if (n % i == 0)
	return (0);
if (i * i > n)
	return (1);
return (ac(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (ac(n, 2));
}
