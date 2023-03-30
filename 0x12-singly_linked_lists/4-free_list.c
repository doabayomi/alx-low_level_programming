#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_list - frees a linked list
 * @head: The head of the linked list.
 *
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
