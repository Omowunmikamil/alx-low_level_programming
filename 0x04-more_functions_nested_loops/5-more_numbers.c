#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers
 * Description: ckeck code that print 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	char a:
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a / 10 > 0)
				_putchar(((a / 10) + '0');
				_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
