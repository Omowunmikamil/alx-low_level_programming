#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
*/

int main(void)
{

	int n = 0;

	while (n < 10)
	{

		putchar(n + '0');
		n++;
	}


	putchar('\n');
	return (0);
}
