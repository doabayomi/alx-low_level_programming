#include <stdio.h>

/**
 * int_index - searches through an integer array for a integer.
 * @array: Input array.
 * @size: Size of input array.
 * @cmp: Comparing function to find matching integer
 *
 * Return: index of array with matching integer.
 * -1 if there is no match or if size is 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = (*cmp)(array[i]);
		if (res != 0)
			return (i);
	}

	return (-1);
}
