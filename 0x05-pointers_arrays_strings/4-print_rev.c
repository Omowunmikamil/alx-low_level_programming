#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string to be printed in reverse
 * Return: 0
*/

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
