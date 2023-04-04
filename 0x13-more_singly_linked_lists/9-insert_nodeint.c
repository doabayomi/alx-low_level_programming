#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - insert a node in a linked list
 * @head: Head of the linked list.
 * @idx: index of the inserted node.
 * @n: value of the inserted node
 *
 * Return: pointer to the inserted node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node = (*head);
	listint_t *new_node;
	unsigned int i = 0;
	int tmp;

	for (; i < (idx - 1); i++)
		prev_node = prev_node->next;

	if (prev_node == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	tmp = n;
	new_node->n = tmp;
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
