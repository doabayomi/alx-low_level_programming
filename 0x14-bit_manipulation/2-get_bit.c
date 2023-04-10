#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_bit - gets the bit at a specified index in a number.
 * @n: Number to be evaluated
 * @index: Position of bit to return
 *
 * Return: bit at the specified index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int pos = 1 << index;
	int bit = n & pos;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (bit != 0)
		return (1);

	return (0);
}
