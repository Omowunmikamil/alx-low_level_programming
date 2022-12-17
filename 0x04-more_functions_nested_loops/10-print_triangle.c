#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y, z;

		for (x = 1; x <= size; x++)
		{
			for (z = x; z <= size; z++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
