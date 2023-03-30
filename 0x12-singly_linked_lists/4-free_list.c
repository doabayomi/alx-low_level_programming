#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: The head of the linked list.
 *
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *h = head;
	list_t *tmp;

	while (h != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp->str);
		free(tmp);
	}
}
