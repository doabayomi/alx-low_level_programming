#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: Size of allocated memory.
 *
 * Return: void.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
