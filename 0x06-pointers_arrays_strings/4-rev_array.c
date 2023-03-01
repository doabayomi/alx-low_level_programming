#include <stdio.h>

/**
 * reverse_array - Reverses an array
 * @a: array of integers to be reversed
 * @n: no of integers in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < (n / 2); i++)
	{
		j = n - i - 1;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
