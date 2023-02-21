#include <stdio.h>

/**
 * print_to_98 - Function prints from any number to 98
 * @n: Number to count up or down to 98 from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		/* In this case, we assume the number is 98 */
		printf("%d", n);
	}
}
