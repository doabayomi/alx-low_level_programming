#include <stdio.h>

/**
 * main - Prints the sum of the natural numbers below 1024 that are multiples
 * of 3 or 5
 *
 * Return: 0
 */
int main(void)
{
	int i, total;

	total = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total = total + i;
		}
	}
	printf("%d", total);
	printf("\n");
	return (0);
}

