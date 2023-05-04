#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned integer
 * @b: string containing binary number
 *
 * Return: unsigned integer representation of binary input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, uint = 0;

	if (b == NULL || b[0] == '\0')
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint = uint * 2 + (b[i] - '0');

		i++;
	}

	return (uint);
}
