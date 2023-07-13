#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 * @size: size of array
 * Return: Pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int index;


	/* allocate memory for hash table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* allocate memory for array */
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
	free(hash_table);
		return (NULL);
	}

	/* initialize array */
	for (index = 0; index < size; index++)
		hash_table->array[index] = NULL;

	/* set the size of the hash table */
	hash_table->size = size;

	return (hash_table);
}
