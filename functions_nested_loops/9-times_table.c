#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always nothing (void)
 */
void times_table(void)
{
int num1 = 0;
	while (num1 <= 9)
	{
		int num2 = 0;
		while (num2 <= 9)
		{
		int num3 = num1 * num2;
		if (num2 == 0)
		{
			_putchar(num3 + '0');
		}
		else
		{
		 _putchar(',');
_putchar(' ');
if (num3 < 10)
{
    _putchar(' ');
    _putchar(num3 + '0');
}
		else
		{
		_putchar((num3 / 10) + '0');
		_putchar((num3 % 10) + '0'); 
		}
		}
		num2++;
		}
	_putchar('\n');
	num1++;
	}
}
