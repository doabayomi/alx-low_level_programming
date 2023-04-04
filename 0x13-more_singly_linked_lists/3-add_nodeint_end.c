#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - adds a node to the bottom of a linked list
 * @head: Head of the linked list
 * @n: value of element to add
 *
 * Return: pointer to the newly created node.
 * NULL, if it fails to create the node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail;
	int tmp = n, i;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = tmp;
	new_node->next = NULL;

	tail = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (i = 0; tail->next != NULL; i++)
		tail = tail->next;
	tail->next = new_node;

	return (new_node);
}
