#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * add_node_end - adds a node to the end of a linked list.
 * @head: The head of the linked list.
 * @str: The new string to add to the linked list
 *
 * Return: pointer to the newly created node. NULL, if it fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tail;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	tail = (*head);
	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new_node;

	return (new_node);
}
