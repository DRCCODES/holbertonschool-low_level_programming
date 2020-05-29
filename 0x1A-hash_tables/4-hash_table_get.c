#include "hash_tables.h"

/**
 * hash_table_get - gets kay's value
 * @ht: the hash table to search
 * @key: the searched for
 * Return: NULL or Key's Value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *sn;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	if (ht->size == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	sn = ht->array[idx];

	while (sn != NULL)
	{
	if (strcmp(sn->key, key) == 0)
		{
		return (sn->value);
		}
	sn = sn->next;
	}
	return (NULL);
}
