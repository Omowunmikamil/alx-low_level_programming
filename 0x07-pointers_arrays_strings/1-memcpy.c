#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: function accepts an input saved into dest
 * @src: function accepts an input saved into src
 * @n: function accepts  an input saved into n
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = src[x];
		x++;
	}
	return (0);
}
