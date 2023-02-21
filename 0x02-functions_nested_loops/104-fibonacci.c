#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	unsigned long int previous = 0, next = 1, current;

	while (i < 98)
	{
		current = previous + next;
		printf("%lu", current);
		previous = next;
		next = current;
		/* Dont ask me how I got this number, I am just playing */
		if (i != 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
