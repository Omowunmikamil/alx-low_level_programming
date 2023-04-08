#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	unsigned long int hash_value, i;

	hash_value = hash_djb2(key);
	i = hash_value % size;

	return (i);
}
