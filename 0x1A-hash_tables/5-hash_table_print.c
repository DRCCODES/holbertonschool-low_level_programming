#include "hash_tables.h"

/**
 * hash_table_print - prints hash table key values
 * @ht: The Hash Table to print
 * Return: N/A
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *pn;
	unsigned long int i = 0;
	int ns = 0;

	if (ht == NULL)
		return;

	if (ht->size == 0)
		return;

	printf("{");

	while (i < ht->size)
	{
		pn = ht->array[i];
		while (pn != NULL)
		{
		if (ns == 0)
		{
			printf("'%s': '%s'", pn->key, pn->value);
			ns++;
		}
		else
		{
		printf(", '%s': '%s'", pn->key, pn->value);
		}
		pn = pn->next;
		}
		i++;
	}
	printf("}\n");
}
