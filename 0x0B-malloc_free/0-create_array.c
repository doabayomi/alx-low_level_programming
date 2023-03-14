#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: The number of chars in the array.
 * @c: The character to insert into the array.
 *
 * Return: Pointer to created array.
 * NULL if size is 0 or space is insufficient.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
