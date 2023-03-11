#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * confirm_nondigits - confirm if a string is a digit contains non digits
 * @d: The input string assumed to be digits.
 *
 * Return: 1 if there is a non-digit, 0 otherwise.
*/
int confirm_nondigits(char const *d)
{
	int i, len = strlen(d);

	for (i = 0; i < len; i++)
	{
		if ( !(isdigit(d[i])) )
			return (1);
	}

	return (0);

}

/**
 * main - adds a given number of arguments
 * @argc: Number of arguments
 * @argv: Array of argument inputs.
 *
 * Return: 1 if there is a non digit in the arguments, 0 otherwise.
*/
int main(int argc, char const *argv[])
{
	int i, sum = 0;

	if (argc < 2)
		printf("%d\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (confirm_nondigits(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}

		printf("%d", sum);
	}

	return (0);
}
