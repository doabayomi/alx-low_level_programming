#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Sums all the nodes in a linked list.
 * @head: Head of the linked list.
 *
 * Return: sum of all the elements in a linked list.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
