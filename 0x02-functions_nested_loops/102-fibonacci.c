#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
*/

int main(void)
{
	long int i = 0, j = 1, k;
	int x;

	for (x = 0; x < 50; x++)
	{
		k = i + j;
		if (n == 0)
		{
			printf("%ld", k);
		}
		else
		{
			printf(", %ld", k);
		}
		i = j;
		j = k;
	}
	putchar('\n');
	return (0);
}
