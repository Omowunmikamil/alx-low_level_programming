#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Description: check the code that prints the sign of a number
 * @n: is the sign to be cheacked
 * Return: 1 and prints + if n is greater than zero,
 * return 0 and prints 0 if n is zero,
 * return -1 and prints - if n is less than zero
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_pitchar('-');
		return (-1);
	}
}
