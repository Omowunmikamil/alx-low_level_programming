#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num s of arguments passed
 * Return: the sum of parameters
*/

int sum_them_all(const unsigned int n, ...);
{
	va_list list;
	unsigned int sum = 0, param;

	va_start(list, n);

	for (param = 0; param < n; param++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
