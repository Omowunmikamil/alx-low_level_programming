#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - return pointer to newly allocated space in memory, which
 * contains a copy of the parameter giving string
 * @str: string to copy
 * Return: pointer to duplicated string, NULL if insufficient memory
*/

char *_strdup(char *str)
{
	char *ar;
	unsigned int x = 0;
	unsigned int y = 0;

	if (str == NULL)
		return (NULL);
	while (str[x])
		x++;

	ar = malloc(sizeof(char) * (x + 1));
	if (ar == NULL)
		return (NULL);
	while (str[y])
	{
		ar[y] = str[y];
		y++;
	}
	ar[y] = 0;
	return (ar);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct dog else NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncopy;
	char *pcopy;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	ncopy = _strdup(name);
	if (!ncopy && name)
	{
		free(new);
		return (NULL);
	}
	pcopy = _strdup(owner);
	if (!pcopy && owner)
	{
		free(ncopy);
		free(new);
		return (NULL);
	}

	new->name = ncopy;
	new->age = age;
	new->owner = pcopy;

	return (new);
}
