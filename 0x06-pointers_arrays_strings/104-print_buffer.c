#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer 10 times at a time
 * @b: the buffer to be printed
 * @size: the num of bytes to be printed
*/

void print_buffer(char *b, int size)
{
	int byte, buff;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (buff = 0; buff < 10; buff++)
		{
			if ((buff + byte) >= size)
				printf("  ");

			else
				printf("%02x", *(b + buff + byte));

			if ((buff % 2) != 0 && buff != 0)
				printf(" ");
		}

		for (buff = 0; buff < 10; buff++)
		{
			if ((buff + byte) >= size)
				break;

			else if (*(b + buff + byte) >= 31 && *(b + buff + byte) <= 126)
				printf("%c", *(b + buff + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");

}
