#include "main.h"

void times_table(void)
{
int num1 = 0;
	while ( num1 <= 9)
	{
		int num2 = 0;
		while ( num2 <= 9)
		{
		int num3 = num1*num2;
		_putchar(num3 + '0');
		_putchar(num3 % 10 + '0');
		_putchar(',');
		_putchar(' ');
		num2++;
		}
	_putchar('\n');
	num1++;
	}
}
