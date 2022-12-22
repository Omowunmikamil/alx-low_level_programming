#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: the string
 * @dest: string to be added
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\n')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
