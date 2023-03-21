#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: function accepts input saved into s
 * @c: function accepts inputs saved into c
 * Return: Always 0
*/

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] >= '\0')
	{
		if (s[x] == c)
			return (&s[x]);
		x++;
	}

	return (NULL);
}
