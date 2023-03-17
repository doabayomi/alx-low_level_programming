#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: Minimum value in the array
 * @max: Maximum value in the array
 *
 * Description: Creates an array of integers with members set from min to max
 * in particular order.
 * Return: pointer to array. NULL if min > max or memory allocation fails.
*/
int *array_range(int min, int max)
{
	int i, count, tmp;
	int *arr;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	arr = (int *)malloc(count * sizeof(int));
	if (arr == NULL)
		return (NULL);

	tmp = min;
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp;
		tmp++;
	}

	return (arr);
}
