#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	unsigned long int previous = 0, next = 1, current;

	for (i = 0; i < 98; i++)
	{
		current = previous + next;
		printf("%lu", current);
		previous = next;
		next = current;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
