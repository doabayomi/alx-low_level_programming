#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int previous = 0, next = 1, current;

	for (i = 0; i < 50; i++)
	{
		current = previous + next;
		printf("%d", current);
		previous = next;
		next = current;
		printf(", ");
	}
	printf("\n");
	return (0);
}
