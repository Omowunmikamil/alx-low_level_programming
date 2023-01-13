#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to be included in @s2
 * Return: newly allocated space in memory, NUll if function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0, j = 0;
	unsigned int x, y;
	unsigned int z = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	ar = malloc(sizeof(char) * (len + 1));
	if (ar == Null)
		return (NULL);

	for (y = 0; y < i; y++)
		ar[z++] = s1[y];
	for (x = 0; x < j; x++)
		ar[z++] = s2[x];

	ar[z] = '\0';
	return (ar);
}
