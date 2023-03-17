#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - creates a array of specified size
 * @nmemb: Number of member in the array.
 * @size: The size of each member in the array.
 *
 * Description: Allocates a memory space with the give number of members and
 * each member is of a given size. Also all the members are set to 0
 * Return: void. NULL if parameters are equal to zero or memory allocation
 * fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
