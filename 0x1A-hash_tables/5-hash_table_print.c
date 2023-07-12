#include "hash_tables.h"

/**
 * print_pair - prints a key value pair in the format "key:value"
 * @node: The current node to print
*/
void print_pair(hash_node_t *node)
{
	printf("\'%s\': \'%s\'", node->key, node->value);
}

/**
 * hash_table_print - prints an hash table
 * @ht: The hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int is_first_pair = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				if (is_first_pair == 0)
					printf(", ");
				print_pair(current_node);
				current_node = current_node->next;
				is_first_pair = 0;
			}
		}
	}
	printf("}");
	printf("\n");
}
