#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square using the '#' character
 * @size: The dimensions of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (!(size <= 0))
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
