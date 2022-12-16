#include "main.h"

/**
 * more_numbers - prints numbers
 * Description: check code that prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
