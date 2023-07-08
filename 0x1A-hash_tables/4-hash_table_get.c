#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: pointer to the hash table to look into
 * @key: key to search for
 *
 * Return: value associated with the key
 *         or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *present_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	present_node = ht->array[index];

	while (present_node != NULL)
	{
		if (strcmp(present_node->key, key) == 0)
			return (present_node->value);
		present_node = present_node->next;
	}
	return (NULL);
}
