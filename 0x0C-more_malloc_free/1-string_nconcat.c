#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns and calculate string length
 * @str: string
 * Return: string length
*/

int _strlen(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	return (x);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: string 2 bytes to add to string 1
 * Return: new string followed by the first @n bytes of s2, else NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int num, len, x, y;
	char *concat;

	num = n;
	/*show NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*navigate n bytes*/
	if (num < 0)
		return (NULL);
	/*shows if n is bigger*/
	if (num >= _strlen(s2))
		num = _strlen(s2);

	/*add +1 for NULL pointer*/
	len = _strlen(s1) + num + 1;

	/*malloc & check for error*/
	concat = malloc(sizeof(*concat) * len);
	if (concat == NULL)
		return (NULL);

	/*concatenate*/
	for (x = 0; s1[x] != '\0'; x++)
		concat[x] = s1[x];
	for (y = 0; y < num; y++)
		concat[x + y] = s2[y];
	concat[x + y] = '\0';

	return (concat);
}
