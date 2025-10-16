#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
	n = -n;
	return (n % 10);
	}
	else
	return (n % 10);
}
