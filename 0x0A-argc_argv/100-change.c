#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds the minimum number of coins for change
 * @argc: Number of arguments
 * @argv: Array of argument inputs.
 *
 * Return: 1 if there are wrong arguments and 0 otherwise
*/
int main(int argc, char const *argv[])
{
	int i, count, remainder, change, len;
	int cents[] = {25, 10, 5, 2, 1};

	count = 0;
	remainder = 0;
	len = sizeof(cents) / sizeof(cents[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	if (change > 0)
	{
		for (i = 0; i < len; i++)
		{
			if (count == 0 && change >= cents[i])
			{
				count = change / cents[i];
				remainder = change % cents[i];
			}
			else
			{
				if (remainder != 0 && remainder >= cents[i])
				{
					count += remainder / cents[i];
					remainder = remainder % cents[i];
				}
			}
		}
	}

	printf("%d\n", count);
	return (0);
}
