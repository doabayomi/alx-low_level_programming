#include "hash_tables.h"

/**
 * *create_node - creates a new node
 * @key: The key of the new node
 * @value: The value of the new node
 *
 * Return: The newly created hash node
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = (char *)malloc(strlen(key) + 1);
	new_node->value = (char *)malloc(strlen(value) + 1);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	return (new_node);
}

/**
 * free_new_node - frees a newly created new node
 * @new_node: The newly created node
*/
void free_new_node(hash_node_t *new_node)
{
	free(new_node->key);
	free(new_node->value);
	free(new_node);
}

/**
 * hash_table_set - adds an element to a hash table
 * @ht: The hash table
 * @key: The key of the hash table
 * @value: The new value for the key in the hash table
 *
 * Return: 0 if fails, 1 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = ht->size;
	unsigned long int index;
	hash_node_t *current_node, *new_node, *previous_node = NULL;

	if (strlen(key) == 0 || key == NULL || ht == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, size);
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	current_node = ht->array[index];

	if (current_node == NULL)
	{
		if (index >= size)
		{
			free_new_node(new_node);
			return (0);
		}
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		while (current_node != NULL)
		{
			if (strcmp(current_node->key, key) == 0)
			{
				free(current_node->value);
				current_node->value = strdup(value);
				if (current_node->value == NULL)
				{
					free_new_node(new_node);
					return (0);
				}
				free_new_node(new_node);
				return (1);
			}
			previous_node = current_node;
			current_node = current_node->next;
		}
		if (previous_node != NULL)
			previous_node->next = new_node;
	}
	return (1);
}
