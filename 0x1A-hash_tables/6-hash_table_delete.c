#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: the hash table to delete
 * Return: N/A
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *dn;
	unsigned long int i = 0;

	while (i < ht->size)
	{
	dn = ht->array[i];
		while (dn != NULL)
		{
			free(dn->key);
			free(dn->value);
			free(dn);
			dn = dn->next;
		}
	i++;
	}
	free(dn);
	free(ht->array);
	free(ht);
}
