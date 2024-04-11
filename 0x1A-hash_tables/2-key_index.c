#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value pair should
 * is stored in array of a hash table.
 * @key: The key to of the index.
 * @size: The size of array of hash table.
 * Return: Index of key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
