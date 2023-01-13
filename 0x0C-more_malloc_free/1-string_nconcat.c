#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: string 2 bytes to add to string 1
 * Return: new string followed by the first @n bytes of s2, else NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, d, f, i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (b > n)
		b = n;

	len = a + b;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (f = 0; f < a; f++)
		ptr[i++] = s1[f];
	for (d = 0; d < b; d++)
		ptr[i++] = s2[m];

	ptr[i] = '\0';
	return (ptr);
}
