#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including
 * the terminating null to the buffer
 * @dest: pointer to to the string of array
 * @src: num of element to extract
 * Return: 0
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}

