#include "hash_tables.h"

/**
 * hash_table_set - Add/update ele in hash table.
 * @ht: Pointer to hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: Value associated with key.
 * Return: Upon failure - 0. Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val_cp;
	unsigned long int index, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (val_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = val_cp;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_cp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val_cp;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
