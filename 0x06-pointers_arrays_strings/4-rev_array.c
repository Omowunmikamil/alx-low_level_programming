#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array to be reversed
 * @n: arrays length
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int j = 0, k;

	n = n - 1;
	while (j < n)
	{
		k = *(a + j);
		*(a + j) = *(a + n);
		*(a + n) = k;
		j++;
		n--;
	}
}
