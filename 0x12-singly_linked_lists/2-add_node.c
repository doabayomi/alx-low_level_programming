#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * add_node - adds a node to the beginning a linked list.
 * @head: The head of the linked list.
 * @str: The new string to add to the linked list
 *
 * Return: pointer to the newly created node. NULL, if it fails.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(str);
	new_node->str = strdup(str);

	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
