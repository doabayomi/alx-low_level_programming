#include "lists.h"

/**
 * *add_dnodeint - Adds a node on the beginning of a linked list
 * @head: Head of the linked list
 * @n: The number value of the linked list
 *
 * Return: pointer to the newly created node,
 * NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	int tmp = n;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = tmp;
	new->prev = NULL;
	new->next = *head;
	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;

	return (new);
}
