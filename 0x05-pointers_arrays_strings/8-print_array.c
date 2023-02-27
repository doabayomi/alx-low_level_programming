#include <stdio.h>

/**
 * print_array - Prints the element of an array in order.
 * @a: Pointer to the array.
 * @n: No of elements to print.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
