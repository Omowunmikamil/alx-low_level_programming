#include "main.h"

/**
 * *_strncpy - copies a string
 * @n: num of bytes
 * @dest: string to be copied to
 * @src: string to be copied
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}

