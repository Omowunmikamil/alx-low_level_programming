#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: the array of the integar
 * @n: the num of elements to be printed
 * REturn: 0
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
		{
			printf("%d", a[x]);
		}
		else
		{
			printf(",  %d", a[x]);
		}
		printf("\n");
	}
}

