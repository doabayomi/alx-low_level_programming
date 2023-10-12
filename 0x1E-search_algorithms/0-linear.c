#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the array
 * @size: The number of elements in the array
 * @value: The value to search for in the array
 *
 * Return: The first index where the value is located in the array.
 * -1 otherwise.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	/* At this point the value is not in the array */
	return (-1);
}
