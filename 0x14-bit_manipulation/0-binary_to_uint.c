#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: Binary string.
 *
 * Return: converted binary string as an unsigned integer.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int bit_length = strlen(b), ind = bit_length - 1;
	unsigned int converted_value = 0, i = 0;

	if (b == NULL)
		return (0);

	while (ind >= 0 && i < bit_length)
	{
		if ((b[ind] != '1') && (b[ind] != '0'))
			return (0);

		if (b[ind] == '1')
			converted_value += (int)pow(2, i);

		ind--;
		i++;
	}

	return (converted_value);
}
