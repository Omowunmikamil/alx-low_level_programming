#include "main.h"

/**
 * print_number - prints an integer
 * @n: integar to be printed
*/

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		x = -x;
		_putchar('_');
	}
	else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % +'0');
}
