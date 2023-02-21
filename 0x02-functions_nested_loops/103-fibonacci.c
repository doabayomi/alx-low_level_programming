#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long int previous = 0, sum = 0, next = 1, current;

	while (1)
	{
		current = previous + next;
		if (current <= 4000000)
		{
			if (current % 2 == 0)
				sum = sum + current;
			previous = next;
			next = current;
		}
		else
		{
			break;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
