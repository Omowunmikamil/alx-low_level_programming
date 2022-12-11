#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
*/

int main(void)
{

	int p;
	int c;

	for (p = 0; p <= 9; p++)
	{
		for (c = p + 1; c <= 9; c++)
		{
			putchar('0' + p);
			putchar('0' + c);

			if (p != 8 || c != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
