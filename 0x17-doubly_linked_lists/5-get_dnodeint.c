#include "lists.h"

/**
 * *get_dnodeint_at_index - gets a node a specific index in a linked list.
 * @head: The head of the linked list
 * @index: The index of the node to be returned
 *
 * Return: Pointer to the node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;
	dlistint_t *tmp = head;

	if (*head == NULL)
		return (NULL);

	for (; i < index; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (node == NULL)
		return (NULL);

	return (tmp);
}
