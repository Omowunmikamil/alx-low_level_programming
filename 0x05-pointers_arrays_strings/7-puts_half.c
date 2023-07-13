#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
*/

void puts_half(char *str)
{
	int i = 0, j = 0, x;

	while (str[i++])
	{
		j++;
	}
	if ((j % 2) == 0)
	{
		x = j / 2;
	}
	else
	{
		x = (j + 1) / 2;
	}

	for (i = x; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
