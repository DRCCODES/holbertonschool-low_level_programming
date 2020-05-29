#include "hash_tables.h"

/**
 * hash_table_set - sets key value pair or updates value
 * @ht: hash table to add or update
 * @key: key to add or update value or
 * @value: value to add or update
 * Return: 1 or 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int idx;
        hash_node_t *nn;
        hash_node_t *tn;

        if (ht == NULL)
                return (0);
        if (key == NULL)
                return (0);
        if (ht->size == 0)
                return (0);

        idx = key_index((unsigned char *)key, ht->size);

        tn = ht->array[idx];

        while (tn != NULL)
        {
                if (strcmp(tn->key, key) == 0)
                {
                        free(tn->value);
                        tn->value = strdup(value);
                        return (1);
                }
                tn = tn->next;
        }
        nn = malloc(sizeof(hash_node_t));
        if (nn == NULL)
                return (0);

        nn->key = strdup(key);
        nn->value = strdup(value);

        if (ht->array[idx] != NULL)
        {
                nn->next = ht->array[idx];
        }
        else
                nn->next = NULL;

        ht->array[idx] = nn;
        return (1);
}
