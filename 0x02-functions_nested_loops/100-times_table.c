#include <stdio.h>

/**
 * times_table - Program to print the nine times table
 * @n: Number to be multiplied to
 * Return: void
 */
void print_times_table(int n)
{
	/**
	 * The idea is to use two loop to print each number
	 *  and multiply it by the second number and then a new line
	 */
	int multiplier, multiplied;

	if (n < 0 || n > 15)
	{
		printf("0");
	}
	else
	{
		for (multiplier = 0; multiplier <= n; multiplier++)
		{
			for (multiplied = 0; multiplied <= n; multiplied++)
			{
				int product = multiplier * multiplied;

				if (multiplied > 0)
				{
					printf(",");
					if (product < 10)
					{
						printf("   ");
					}
					else if (product >= 10 && product < 100)
					{
						printf("  ");
					}
					else
					{
						printf(" ");
					}
				}
				printf("%d", product);
			}
			printf("\n");
		}
	}
}
