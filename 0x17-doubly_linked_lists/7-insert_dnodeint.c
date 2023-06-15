#include "lists.h"

/**
 * check_prev_node - confirm if prev_node is not null
 * @prev_node: previous node
 * @new_node: node_to be_made
 *
 * Return: 1 if works, 0 if it fails
 */
int check_prev_node(dlistint_t *prev_node, dlistint_t *new_node)
{
	if (prev_node == NULL)
	{
		free(new_node);
		return (1);
	}
	return (0);
}
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
		if (check_prev_node(prev_node, new_node) == 1)
			return (NULL);
		prev_node = prev_node->next;
	}
	if (check_prev_node(prev_node, new_node) == 1)
		return (NULL);
	new_node->n = n;
	new_node->next = prev_node->next;
	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	prev_node->next = new_node;
	return (new_node);
}
