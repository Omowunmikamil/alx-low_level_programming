#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: structure to be freed
 * Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
