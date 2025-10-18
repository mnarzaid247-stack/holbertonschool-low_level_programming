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
		if (num3 > 9)
		{
		_putchar(num3/10 + '0');
		_putchar(num3 % 10 + '0');
		if (num2 <= 8)
		{
		_putchar(',');
		_putchar(' ');
		}
		}
		else 
		{
		_putchar('0'+ num3);
		if (num2 <= 8)
                {
                _putchar(',');
                _putchar(' ');
                }
		}
		num2++;
		}
	_putchar('\n');
	num1++;
	}
}
