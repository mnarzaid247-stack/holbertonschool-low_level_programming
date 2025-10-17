#include "main.h"

void jack_bauer(void)
{
int hour  = 0;
while (hour < 24)
{
int min  = 0;
while (min < 7 )
{
	int sec = 0;
	if (min <= 5)
	{
	while (sec < 10)
	{
		_putchar(hour + '0');
_putchar(':');
	_putchar(min + '0');
	_putchar(sec + '0');
	_putchar('\n');
	sec++;
	}
	}
	else 
	if ( min == 6 )
	{
		_putchar(hour + '0');
		_putchar(':');
		_putchar('0');
		_putchar('0');
		 _putchar('\n');
	}
min++;
}
hour++;
}
}
