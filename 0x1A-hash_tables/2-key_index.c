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
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash + c);
	}
	return (hash % size);
}
