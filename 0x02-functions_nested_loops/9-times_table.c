#include "main.h"

/**
 * times_table - prints the 9 times table
 * Description: check code that prints the 9 times table,
 * starting with 0
 * Return: 0
*/

void times_table(void)
{
	int f, g, h, i, j;

	h = 0;

	for (f = 0; f < 9; f++)
	{
		for (g = 0; g <= 9; g++)
		{
			h = f * g;
			if (g > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (h >= 10 && h < 100)
				{
					i = h / 10;
					j = h % 10;
					_putchar('0' + i);
					_putchar('0' + j);
				}
				else if (h < 10)
				{
					_putchar(' ');
					_putchar('0' + h);
				}
			}
			else
			{
				_putchar(h + '0');
			}
		}
	_putchar('\n');
	}
}
