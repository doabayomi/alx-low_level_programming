#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_list - prints the elements of a linked list
 * @h: The head of the linked list.
 *
 * Return: number of elements in the linked list.
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
