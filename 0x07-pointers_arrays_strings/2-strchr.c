#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: function accepts input saved into s
 * @c: function accepts inputs saved into c
 * Return: Always 0
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
