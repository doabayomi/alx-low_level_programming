#include "lists.h"

/**
 * dlistint_len - counts the elements in a doubly linked list
 * @h: Head of the doubly linked list
 *
 * Return: number of nodes in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
