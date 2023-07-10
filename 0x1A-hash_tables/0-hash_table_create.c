#include "hash_tables.h"

/**
 * *hash_table_create - creates an empty hash table
 * @size: The size of the hash table to be created
 *
 * Return: The empty created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i = 0;

	hash_table = (hash_table_t *)malloc(sizeof(hash_table));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
		return (NULL);

	for (; i < hash_table->size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
