#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the argument to be reversed
*/

void rev_string(char *s)
{
	int i = 0, j, k;
	char x;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		x = s[j];
		s[j] = s[k];
		s[j] = x;
	}
}
