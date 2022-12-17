#include <stdio.h>

/**
 * main - prime factors
 * Description: prints the largest prime factor of the number 612852475143,
 * followed by a new line
 * Return: always 0
*/

int main(void)
{
	unsigned long y = 612852475143;
	unsigned long x = 2;

	while (x < y)
	{
		if (y % x == 0)
		{
			y /= x;
			x = 2;
		}
		else
		{
			x++;
		}
	}
	printf("%lu\n", num);
	return (0);
}
