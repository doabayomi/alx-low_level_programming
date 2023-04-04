#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - adds a node to the top of a linked list
 * @head: Head of the linked list
 * @n: value of element to add
 *
 * Return: pointer to the newly created node.
 * NULL, if it fails to create the node.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	int tmp = n;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = tmp;

	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
