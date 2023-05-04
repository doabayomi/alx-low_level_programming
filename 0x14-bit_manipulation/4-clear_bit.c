#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - clears bit at a particular position in a number.
 * @n: Number to work with
 * @index: Index to clear bit at.
 *
 * Return: 1 if it worked, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit_position;

	if (index > 63)
		return (-1); /* max bits in unsigned long int */

	bit_position = ~(1 << index);
	*n &= bit_position;
	return (1);
}
