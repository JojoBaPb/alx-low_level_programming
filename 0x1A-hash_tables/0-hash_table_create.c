#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: array size
 * Return: If error occurs NULL, otherwise pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int x;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
		return (NULL);
	for (x = 0; x < size; i++)
		htable->array[x] = NULL;

	return (htable);
}
