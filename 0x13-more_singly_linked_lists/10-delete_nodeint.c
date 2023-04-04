#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list.
 * @head: Head of the linked list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if it fails.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_delete;
	listint_t *prev_node = *head;
	unsigned int i;

	if (prev_node == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_delete = *head;
		(*head) = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
		prev_node = prev_node->next;

	if (prev_node == NULL)
		return (-1);

	node_to_delete = prev_node->next;
	prev_node->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
