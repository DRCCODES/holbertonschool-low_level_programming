#include "hash_tables.h"

/**
 * hash_table_create - makes a hash table
 * @size: size of node array
 *
 * Return: pointer to hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *ht;
	hash_node_t **hn;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	hn = malloc(sizeof(hash_node_t *) * size);
	if (hn == NULL)
		return (NULL);

	ht->size = size;
	ht->array = hn;
	return (ht);
}
