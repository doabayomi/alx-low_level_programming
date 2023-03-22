#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

int main(int argc, char const *argv[])
{
	int a, b, res;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if ((s == '%' || s == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = (get_op_func(s))(a, b);

	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d", res);
	return (0);
}
