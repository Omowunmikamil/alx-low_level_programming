#include "main.h"

/**
 * times_table - prints the 9 times table
 * Description: check code that prints the 9 times table,
 * starting with 0
 * Return: 0
*/

void times_table(void)
{
	int f, g, h;
	int i = 0;

	for (f = 0; f < 10; f++)
	{
		for (g = 0; g < 11; g++)
		{
			h = i * g;

			if (h >= 0 && h <= 9)
			{
				if (g == 0)
					_putchar('0' + h);
				else if (g == 10)
					_putchar('\n');
					i++;
				else
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + h);
			}
			else if (h >= 10)
			{
				if (g == 10)
					_putchar('\n');
					i++;
				else
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (h / 10));
					_putchar('0' + (h % 10));
			}
		}
	}
}
