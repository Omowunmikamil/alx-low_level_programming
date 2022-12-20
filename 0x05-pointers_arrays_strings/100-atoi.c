#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer
*/

int _atoi(char *s)
{
	int g = 1;
	unsigned int i = 0;
	char z = 0;

	while (*s)
	{
		if (*s == '-')
		{
			g = g * -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			z = 1;
			i = i * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (z)
				break;
		}
		s++;
	}
	if (g < 0)
		i = (-(i));
	return (i);
}
