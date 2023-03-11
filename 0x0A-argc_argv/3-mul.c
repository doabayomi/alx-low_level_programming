#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: Number of arguments
 * @argv: Array of argument inputs.
 *
 * Return: 1 if there are more than two number arguments, 0 otherwise.
*/
int main(int argc, char const *argv[])
{
	int a, b;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
