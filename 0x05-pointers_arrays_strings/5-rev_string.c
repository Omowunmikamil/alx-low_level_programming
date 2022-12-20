#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the argument to be reversed
*/

void rev_string(char *s)
{
	int b = 0, a = 0;
	char x;

	while (s[a++] != '\0')
	{
		b++;
	}

	for (a = b - 1; a >= b / 2; a++)
	{
		x = s[a];
		s[a] = s[b - a - 1];
		s[b - a - 1] = x;
	}
}
