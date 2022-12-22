#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string to be encoded
 * Return: c
*/

char *rot13(char *c)
{
	int x, y;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(c + x); x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (a[y] == *(c + x))
			{
				*(c + x) = b[y];
				break;
			}
		}
	}
	return (c);
}
