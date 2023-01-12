#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: size of argument
 * Return: a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *arg;
	int x, y, z, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
		len++;
	}

	arg = malloc(sizeof(char) * (len + 1));
	if (arg == NULL)
		return (NULL);

	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			arg[z] = av[x][y];
			z++;
		}
		arg[z] = '\n';
		z++;
	}
	arg[z] = '\0';

	return (arg);
}
