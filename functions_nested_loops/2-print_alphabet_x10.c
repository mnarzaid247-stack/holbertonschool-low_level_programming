#include "main.h"

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: Always nothing (void)
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
	{
	print_alphabet();
	i++;
	}
}
