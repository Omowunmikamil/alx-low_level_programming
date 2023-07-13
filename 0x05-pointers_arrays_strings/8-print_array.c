#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: the arrey to be printed
 * @n: the num to be printed
 * Return: 0
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
			printf(", %d", a[x]);
		}
	}
	printf("\n");
}
