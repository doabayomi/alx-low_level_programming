#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array using binary search
 * @array: Pointer to the array
 * @size: The number of elements in the array
 * @value: The value to search for in the array
 *
 * Return: The first index where the value is located in the array.
 * -1 otherwise.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1), middle, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < (high + 1); i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		middle = low + ((high - low) / 2);

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
	}

	/* At this point the element is not there */
	return (-1);
}
