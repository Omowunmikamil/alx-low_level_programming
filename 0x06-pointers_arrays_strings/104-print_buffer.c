#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer 10 times at a time
 * @b: the buffer to be printed
 * @size: the num of bytes to be printed
*/

void print_buffer(char *b, int size)
{
	int x;

	for (x = 0; x <= (size - 1) / 10 && size; x++)
	{
		printf("%08x: ", x * 10);
		if (x < size / 10)
		{
			print_line(b, 9, x);
		}
		else
		{
			print_line(b, size % 10 - 1, x;
		}
		putchar('\n');
	}
	if (size == 0)
	putchar('\n');
}
