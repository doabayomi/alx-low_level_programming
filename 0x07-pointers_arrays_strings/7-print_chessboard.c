#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: The chessboard array to be printed
 *
 * Return: void.
*/
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0)
			_putchar('\n');

		_putchar(*(*a + i));
	}
}
