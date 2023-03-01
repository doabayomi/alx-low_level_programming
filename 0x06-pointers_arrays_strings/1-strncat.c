#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncat - Concatenates n characters from one string to another.
 * @dest: String to be concatenated to.
 * @src: String to be concatenated from.
 * @n: Numbers of characters from src to be concatenated to dest.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t src_len = strlen(src);
	size_t i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	if (n <= src_len)
		dest[dest_len + n] = '\0';

	return (dest);
}
