#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: character to be checked
 * Return: 0
*/

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
		a++;

	return (a);
}
