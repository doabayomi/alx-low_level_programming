#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - counts how many bits needs to be changed to turn n to m
 * @n: First number
 * @m: Second number
 *
 * Return: No of bits needed to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			flips++;

		n >>= 1;
		m >>= 1;
	}

	return (flips);
}
