#include <stdio.h>

/**
 * print_diagsums - prints the sums of the diagonals of an array.
 * @a: The array to be worked with.
 * @size: The size of the array.
 *
 * Return: void.
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
	}

	for (i = 1; i <= size; i++)
	{
		sum2 += a[(size * i) - i];
	}

	printf("%d, %d\n", sum1, sum2);
}
