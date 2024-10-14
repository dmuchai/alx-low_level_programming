#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of at which the key/value should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value2;

	hash_value2 = hash_djb2(key);

	return (hash_value2 % size);
}
