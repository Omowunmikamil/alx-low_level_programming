#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: the integer array
 * @size: the size of the array to be printed
*/

void print_diagsums(int *a, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += a[j];
		a += size;
	}

	a -= size;
	for (j = 0; j < size; j++)
	{
		sum2 += a[j];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
