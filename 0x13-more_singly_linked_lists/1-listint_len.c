#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - finds the length of the linked list.
 * @h: Head of the linked list.
 *
 * Return: length of the linked list.
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
