#include "lists.h"

/**
 * print_dlistint - prints the elements in a doubly linked list
 * @h: Head of the doubly linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t list = h;

	while (list->next != NULL)
	{
		count++;
		printf("%d", list->n);
		list = list->next;
	}

	return (count);
}
