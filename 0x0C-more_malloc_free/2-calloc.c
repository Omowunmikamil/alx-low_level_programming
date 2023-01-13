#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using
 * @nmemb: the num of element
 * @size: the size of element type
 * Return: a pointer to the allocated memory,
 * NUll if nmemb or size is 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int x;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	for (x = 0; x < (size * nmemb); x++)
		ar[x] = 0;

	return (ar);
}
