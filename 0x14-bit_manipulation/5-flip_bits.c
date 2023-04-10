#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * flip_bits - gets bit difference between two numbers
 * @n: Number to be evaluated
 * @m: Second number to be compared to
 *
 * Description: Finds the number of bits needed to be filpped to get
 * one number from another.
 * Return: Number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int bit_count = 0;

	while (diff > 0)
	{
		bit_count++;
		diff &= (diff - 1);
	}

	return (bit_count);
}
