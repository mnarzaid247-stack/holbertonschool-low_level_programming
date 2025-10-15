#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n <= 9)
	{
		putchar ('0' + n);
		n++;
	}
	while (c <= 'f')
		{
		putchar (c);
		c++;
		}
	putchar ('\n');
	return (0);
}
