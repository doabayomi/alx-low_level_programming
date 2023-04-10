#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_binary - Prints binary representation of a decimal integer.
 * @n: Decimal unsigned integer.
*/
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int one_hit = 0;

	for (i = 1 << 31; i > 0; i = i / 2)
	{
		if (n & i)
		{
			_putchar('1');
			one_hit = 1;
		}
		else
		{
			if (one_hit)
				_putchar('0');
		}

		if (one_hit == 0 && i == 1)
			_putchar('0');
	}
}
