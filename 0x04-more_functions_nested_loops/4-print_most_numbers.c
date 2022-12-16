#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers
 * Description: checks the code and prints num from 0 to 9
 * Return: 0
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n + '0');
		}

		_putchar('\n');
	}
}
