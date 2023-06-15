#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a particular index
 * @head: The head of the linked list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if successful, -1 if unsuccessful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete;
	dlistint_t *next_node;
	dlistint_t *prev_node = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_delete = *head;
		(*head) = (*head)->next;
		free(node_to_delete);
		if ((*head) != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (prev_node == NULL)
			return (-1);
		prev_node = prev_node->next;
	}

	if (prev_node == NULL)
		return (-1);

	node_to_delete = prev_node->next;
	if (node_to_delete == NULL)
		return (-1);
	prev_node->next = node_to_delete->next;
	next_node = prev_node->next;
	if (next_node != NULL)
		next_node->prev = prev_node;
	free(node_to_delete);
	return (1);
}
