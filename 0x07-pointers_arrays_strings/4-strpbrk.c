#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string pointer to be searched
 * @accept: string pointer to be searched for
 * Return: a pointer to the byte
*/

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		x = 0;
		while (accept[x])
		{
			if (*s == accept[x])
				return (s);
			x++;
		}

		s++;
	}
	return ('\0');
}
