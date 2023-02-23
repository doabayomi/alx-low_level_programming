#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints from 0 to 14, 10 times.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	char n[] = "01234567891011121314";
	int n_length = sizeof(n)/sizeof(n[0]);

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < n_length; j++)
			_putchar(n[j]);
		_putchar('\n');
	}
}
