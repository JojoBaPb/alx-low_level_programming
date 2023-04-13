#include "hash_tables.h"

/**
 * hash_table_get - Get the value with
 * key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to get the value of.
 * Return: NULL if no key can be matched
 * Otherwise,  value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nde;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_indx((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	nde = ht->array[indx];
	while (nde && strcmp(nde->key, key) != 0)
		nde = nde->next;

	return ((nde == NULL) ? NULL : nde->value);
}
