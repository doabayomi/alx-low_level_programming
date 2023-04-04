#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - removes a node from the top of the linked list
 * @head: Head of the linked list.
 *
 * Return: value of the head.
*/
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp = (*head);

	if ((*head) == NULL)
		return (n);
	n = tmp->n;
	(*head) = (*head)->next;
	free(tmp);

	return (n);
}
