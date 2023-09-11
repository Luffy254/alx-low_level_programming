#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *present_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	present_node = ht->array[index];

	while (present_node != NULL)
	{
		if (strcmp(present_node->key, key) == 0)
		{
			free(present_node->value);
			present_node->value = strdup(value);
			return (1);
		}
		present_node = present_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
