#include "hash_tables.h"

/**
 * *hash_table_get - retrieves a value from a key in a hash table
 * @ht: The hash table
 * @key: The key of the hash table
 *
 * Return: The value of the key in the hash table, NULL otherwise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index > ht->size)
		return (NULL);
	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);

		item = item->next;
	}
	return (NULL);
}
