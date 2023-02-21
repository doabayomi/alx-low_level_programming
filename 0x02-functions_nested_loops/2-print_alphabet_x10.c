#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet follwed by a new line ten times.
 */
void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
