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
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
