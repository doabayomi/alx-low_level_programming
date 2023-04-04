#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - gets a node at an index of a linked list
 * @head: Head of the linked list.
 * @index: The index of the node starting from 0
 *
 * Return: pointer to the specific node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;

	for (; i < index; i++)
		node = node->next;

	if (node == NULL || index < 0)
		return (NULL);
	return (node);
}
