#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @n: num of bytes
 * @dest: string to append
 * @src: the string to be be used to append
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
	{
		a++;
	}

	while (b < n && *(src + b))
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	if (b < n)
	{
		*(dest + a) = *(src + b);
	}
	return (dest);
}
