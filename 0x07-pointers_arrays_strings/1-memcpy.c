#include <stdio.h>

/**
 * *_memcpy - copy the first n bytes of an array to another array.
 * @dest: String to be copied to.
 * @src: The string to be copied from
 * @n: The number of bytes that should be copied.
 *
 * Return: The pointer to the destination string.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
