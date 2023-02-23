#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a square using the '#' character
 * @size: The dimensions of the square
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (!(size <= 0))
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 0; k < (size - i); k++)
				_putchar(' ');

			for (j = 0; j < i; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
