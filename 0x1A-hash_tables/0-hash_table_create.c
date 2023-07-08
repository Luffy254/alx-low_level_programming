#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the new created hash table
 * or NULL if error happens
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tbl;
	unsigned long int i;

	hash_tbl = malloc(sizeof(hash_table_t));
	if (hash_tbl == NULL)
		return (NULL);

	hash_tbl->size = size;

	hash_tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tbl->array == NULL)
	{
		free(hash_tbl);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_tbl->array[i] = NULL;

	return (hash_tbl);
}
