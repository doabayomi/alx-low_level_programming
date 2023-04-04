#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: Head of the linked list.
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
