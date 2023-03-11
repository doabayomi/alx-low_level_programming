#include <stdio.h>

/**
 * main - Prints the number of arguments given to the program.
 * @argc: Number of arguments
 * @argv: Array of argument inputs.
 *
 * Return: 0.
*/
int main(int argc, char const *argv[])
{
	printf("%d", argc - 1);
	return (0);
}
