#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - gets bit at a particular position in a number.
 * @n: Number to work with
 * @index: Index to get bit from.
 *
 * Return: bit at the certain index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_position, bit;

	if (index > 63)
		return (-1); /* max bits in unsigned long int */

	bit_position = 1 << index;
	bit = (n & bit_position) ? 1 : 0;
	return (bit);
}
