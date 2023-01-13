#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: string 2 bytes to add to string 1
 * Return: new string followed by the first @n bytes of s2, else NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, x, y;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 1en2 = 0;
	while (s1[len1] != '\0')
		1en1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	str = (char *) malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	for (y = 0; y < n && s2[y] != '\0'; y++)
	{
		str[x] = s2[y];
		x++;
	}

	str[x] = '\0';
	return (str);
}
