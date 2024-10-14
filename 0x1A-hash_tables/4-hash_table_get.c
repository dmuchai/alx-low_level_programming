#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         else - the value associated with key in hash table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node2;
	unsigned long int index2;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index2 = key_index((const unsigned char *)key, ht->size);
	if (index2 >= ht->size)
		return (NULL);

	node2 = ht->array[index2];
	while (node2 && strcmp(node2->key, key) != 0)
		node2 = node2->next;

	return ((node2 == NULL) ? NULL : node2->value);
}
