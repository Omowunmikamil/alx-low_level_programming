#include <stdio.h>
#include <math.h>

/**
 * main - prime factors
 * Description: prints the largest prime factor of the number 612852475143,
 * followed by a new line
 * Return: always 0
*/

int main(void)
{
	long int n = 612852475143;
	long int prime = -1;
	long int x;

	while (n % 2 == 0)
	{
		prime = 2;
		n /= 2;
	}

	for (x = 3; x <= sqrt(n); x = x + 2)
	{
		while (n % x == 0)
		{
			prime = x;
			n = n / x;
		}
	}

	if (n > 2)
	{
		prime = n;
	}

	printf("%lu\n", prime);

	return (0);
}
