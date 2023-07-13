#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: NULL if str = NULL, else returns a pointer to
 * the duplicated string
*/

char *_strdup(char *str)
{
	char *duplicateofstring;
	int indexofstring, lengthofstring = 0;

	if (str == NULL)
		return (NULL);

	for (indexofstring = 0; str[indexofstring]; indexofstring++)
		lengthofstring++;

	duplicateofstring = malloc(sizeof(char) * (lengthofstring + 1));

	if (duplicateofstring == NULL)
		return (NULL);

	for (indexofstring = 0; str[indexofstring]; indexofstring++)
		duplicateofstring[indexofstring] = str[indexofstring];

	duplicateofstring[lengthofstring] = '\0';

	return (duplicateofstring);
}
