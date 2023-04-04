#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the element in a linked list
 * @h: Head of the linked list.
 *
 * Return: length of the linked list.
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
