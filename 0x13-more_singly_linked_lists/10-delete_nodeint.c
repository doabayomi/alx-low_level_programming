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
	listint_t *tmp;
	listint_t *prev_node = *head;
	unsigned int i;

	if (index > 0)
	{
		for (i = 0; i < (index + 1); i++)
			prev_node = prev_node->next;
	}

	if (prev_node == NULL || index < 0)
		return (-1);

	tmp = prev_node->next;
	prev_node->next = tmp->next;
	free(tmp);
	return (1);
}
