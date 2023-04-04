#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: Head of the linked list.
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = (*head);

	while ((*head) != NULL)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
}
