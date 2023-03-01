#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings and retains the other while adding null.
 * @dest: String to be concatenated to.
 * @src: String to be concatenated from.
 *
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t src_len = strlen(src);
	size_t i = 0;

	while (i <= src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	return dest;
}
