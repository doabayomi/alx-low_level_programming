#include <stdio.h>

/**
 * main - Prints the arguments given to the program.
 * @argc: Number of arguments
 * @argv: Array of argument inputs.
 *
 * Return: 0.
*/
int main(int argc, char const *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}

	return (0);
}
