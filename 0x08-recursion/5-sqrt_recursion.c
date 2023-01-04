#include "main.h"

/**
 * check - checks for the square root
 * @x: int x
 * @y: int y
 * Return: int
*/

int check(int x, int y)
{
	if (x * x == y)
		return (a);

	if (x * x > y)
		return (-1);

	return (check(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int to find square root
 *
 * Return: square root or -1
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (check(1, n));
}
