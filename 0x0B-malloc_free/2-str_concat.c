#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated on
 * @s2: string to concatenate to s1
 * Return: NULL if concatenate fails else a pointer to the
 * newly allocated space in the memory
*/

char *str_concat(char *s1, char *s2)
{
	char *concatenatestring;
	int indexofconcat, concatenateindex = 0, lengthofconcat = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (indexofconcat = 0; s1[indexofconcat]; indexofconcat++)
		lengthofconcat++;

	concatenatestring = malloc(sizeof(char) * lengthofconcat);

	if (concatenatestring == NULL)
		return (NULL);

	for (indexofconcat = 0; s1[indexofconcat]; indexofconcat++)
		concatenatestring[concatenateindex++] = s1[indexofconcat];

	for (indexofconcat = 0; s2[indexofconcat]; indexofconcat++)
		concatenatestring[concatenateindex++] = s2[indexofconcat];

	return (concatenatestring);
}
