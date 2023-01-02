#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: function accepts an input saved into s
 * @b: function accepts an input saved into b
 * @n: function accepts an input saved into n
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
