#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * clear_bit - clears the bit at a specified index in a number.
 * @n: Number to be evaluated
 * @index: Position of bit to return
 *
 * Return: 1 if setting is successful
 * -1 otherwise.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pos = 1 << index;
	int mask = ~pos;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	(*n) = (*n) & mask;
	return (1);
}
