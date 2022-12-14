#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: check the code that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59
*/

void jack_bauer(void)
{

	int hour = 0;
	int min = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
		min = 0;
		hour++;
	}
}
