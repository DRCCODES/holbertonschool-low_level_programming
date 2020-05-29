#include "hash_tables.h"

/**
 * key_index - returns index of key
 * @key: to find index of
 * @size: size of hast table array
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
