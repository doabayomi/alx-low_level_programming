#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a node in a linked list
 * @h: Head of the linked list
 * @idx: Index for the node to be inserted to
 * @n: The value for the node
 *
 * Return: Pointer to the new node, NULL if anything goes wrong
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node = (*h);
	dlistint_t *new_node;
	unsigned int i = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *h;
		if ((*h) != NULL)
			(*h)->prev = new_node;
		new_node->prev = NULL;
		(*h) = new_node;
		return (new_node);
	}

	for (; i < (idx - 1); i++)
	{
		if (prev_node == NULL)
			return (NULL);
		prev_node = prev_node->next;
	}

	new_node->n = n;
	new_node->next = prev_node->next;
	(new_node->next)->prev = new_node;
	prev_node->next = new_node;
	return (new_node);
}
