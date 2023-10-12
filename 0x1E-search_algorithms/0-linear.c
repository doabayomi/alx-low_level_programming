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
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
