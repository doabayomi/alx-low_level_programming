#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * list-len - counts the number of nodes in a linked list.
 * @h: The head of the linked list.
 *
 * Return: number of elements in the linked list.
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (i; h != NULL; i++)
		h = h->next;

	return (i);
}
