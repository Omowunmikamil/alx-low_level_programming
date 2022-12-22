#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: sring to be changed
 * Return: s
*/

char *string_toupper(char *s)
{
	int j = 0;

	while (*(s + j))
	{
		if (*(s + j) >= 'a' && *(s + j) <= 'z')
		{
			*(s + j) -= 'g' - 'A';
			j++
		}
	}
	return (s);
}
