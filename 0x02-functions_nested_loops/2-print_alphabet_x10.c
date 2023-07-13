#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet_x10
 * Description: prints 10 times the alphabet in lowercase
*/

void print_alphabet_x10(void)
{
	char x;
	char i;

	for (i = 1; i <= 10 ; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
