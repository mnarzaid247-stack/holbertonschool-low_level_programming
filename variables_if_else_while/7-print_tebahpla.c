#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <=  'z')
		{
		putchar (c);
		c++;
		}
	putchar ('\n');
	return (0);
}
