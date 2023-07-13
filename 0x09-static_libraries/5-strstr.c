#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: location of substring @needle
 * @needle: substring to be located
 * Return: a pointer of substring or @NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			while (haystack[x] == needle[x])
			{
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			}
		}
		haystack++;
	}
	return ('\0');
}
