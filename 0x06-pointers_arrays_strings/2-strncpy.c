#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: String to be copied to
 * @src: String to be copied from
 * @n: No of bytes to be copied from src.
 *
 * Return: Pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
