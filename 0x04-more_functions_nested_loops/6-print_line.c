#include "main.h"

/**
 * print_line - to draw a line
 * Description: print the character '_' to draw a straight line
 * @n: num of character to draw
*/

void print_line(int n)
{
	int draw = n;

	for (draw = n; draw > 0; draw--)
	{
		_putchar('_');

	}
	_putchar('\n');
}
