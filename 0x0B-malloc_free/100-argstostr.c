#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: size of argument
 * Return: a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *a, *arg;
	int x, y, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; total = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; y++, total++)
			;
		total++;
	}
	total++;

	a = malloc(sizeof(char) * total);
	if (a == NULL)
		return (NULL);
	arg = a;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*a = av[x][y];
			a++;
		}
		*a = '\n';
		*a++;
	}
	return (arg);
}
