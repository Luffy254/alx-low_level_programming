#include "hash_tables.h"

/**
 * key_index - index where the key/value pair should be stored
 *             in the array of the hash table
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);
	return (hash_val % size);
}
