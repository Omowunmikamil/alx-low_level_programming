#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: num 1
 * @n2: num 2
 * @r: result
 * @size_r: size result
 * Return: r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, a, b, c, n, aux, dec = 0;

	while (n1[x] != '\0')
	{
		x++
	}
	while (n2[y] != '\0')
	{
		y++;
	}
	for (n = 0; n < y || n < x; n++)
	{
		a = (x - n) > 0 ? (n1[x - n - 1] - '0') : 0;
		b = (y - n) > 0 ? (n2[y - n - 1] - '0') : 0;
		c = a + b + dec;
		r[n] = (c % 10) + '0';
		dec = c > 9 ? 1 : 0;
	}
	if (dec == 1)
	{
		r[n] = '1';
		r[n + 1] = '\0';
	} else
	{
		r[n] = '\0';
		n--;
	}
	for (x = 0; x < n + 1; x++)
	{
		for (y = 0; y < (n - x); y++)
		{
			aux = r[y + 1];
			r[y + 1] = r[y];
			r[y] = aux;
		}
	}
	return (n < size_r - 1 ? r : 0);
}
