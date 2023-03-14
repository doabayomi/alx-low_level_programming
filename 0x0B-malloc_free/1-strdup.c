#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - duplicates a string
 * @str: The string to be copied
 *
 * Return: Pointer to created array.
 * NULL if str is NULL or space is insufficient.
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	/* Finding the string length */
	for (i = 0; str[i] != '\0'; i++)
		len++;
	/* Accounting for the null terminating byte */
	len++;

	copy = (char *)malloc(len * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	return (copy);
}
