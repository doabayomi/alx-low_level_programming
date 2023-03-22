#include <stdio.h>

/**
 * array_iterator - performs functions on all elements of an input array.
 * @array: Input array
 * @size: Size of input array
 * @action: function to implement on members of array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (; i < size; i++)
		(*action)(array[i]);
}
