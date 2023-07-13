#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Description: check the code that computes
 * the absolute value of an integer
 * @n: is the int argument
 * Return: absolute value
*/

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
