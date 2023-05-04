#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - finds whether a system is big or little endian.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ch = (char *)&n;

	if (*ch)
		return (1);
	return (0);
}
