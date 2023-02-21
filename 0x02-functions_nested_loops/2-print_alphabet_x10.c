#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet follwed by a new line ten times.
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10, i++)
	{
		for (char l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar("\n");
	}
}
