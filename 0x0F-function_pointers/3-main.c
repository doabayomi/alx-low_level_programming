#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs operation
 * @argc: Number of arguments
 * @argv: Array storing argument inputs
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if ((s[0] == '%' || s[0] == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(s) == NULL || strlen(s) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
