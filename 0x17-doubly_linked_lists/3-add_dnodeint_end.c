#include "lists.h"

/**
 * *add_dnodeint_end - Adds a node at the end of a doubly linked list
 * @head: Head of the linked list
 * @n: Integer value of node
 *
 * Return: new node created, NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;
	int n_copy = n;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	new->prev = tmp;
	tmp->next = new;

	return (new);
}
