#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: Head of the doubly linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	dlistint_t next_node;

	while (tmp != NULL)
	{
		next_node = tmp->next;
		free(tmp);
		tmp = next;
	}
}
