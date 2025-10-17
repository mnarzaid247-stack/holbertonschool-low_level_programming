#include "main.h"

void jack_bauer(void)
{
int hour  = 0;
while (hour < 24)
{
int min  = 0;
while (min < 60)
{
_putchar(hour + '0');
_putchar(':');
	_putchar(min + '0');
	_putchar('\n');
min++;
}
hour++;
}
}
