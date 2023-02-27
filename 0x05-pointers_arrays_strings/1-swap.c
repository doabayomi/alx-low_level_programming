#include <stdio.h>

/**
 * swap_int - swaps the value of two variables
 * @a: Pointer to the first variable.
 * @b: Pointer to the second variable.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	/**
	 * Using a temporary variable 'tmp' to hold the value of one of the
	 * variables.
	 */
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
