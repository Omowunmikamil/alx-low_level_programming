#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be changed
 *
 * Return: should return s
*/

char *string_toupper(char *s)
{
	int j = 0;

	while (*(s + j))
	{
		if (*(s + j) >= 'a' && *(s + j) <= 'z')
		{
			*(s + j) -= 'a' - 'A';
			j++;
		}
	}
	return (s);
}
