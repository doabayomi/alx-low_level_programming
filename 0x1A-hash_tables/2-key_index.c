#include "hash_tables.h"

/**
 * key_index - gets the index of the key based on hash
 * @key: The key of the item
 * @size: The size of the hash table
 *
 * Return: The index of the key on the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
