#include <stdio.h>

/**
 * times_table - Program to print the nine times table
 *
 * Return: void
 */
void times_table(void)
{
	/**
	 * The idea is to use two loop to print each number
	 *  and multiply it by the second number and then a new line
	 */
	int multiplier, multiplied;

	for (multiplier = 0; multiplier <= 9; multiplier++)
	{
		for (multiplied = 0; multiplied <= 9; multiplied++)
		{
			printf("%d", (multiplier * multiplied));
			if (multiplied < 9)
			{
				printf(",");
				if ((multiplier * multiplied) < 10)
				{
					printf("  ");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
