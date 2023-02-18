#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function of C
 *
 * Description: This program shows whether a number is positive or
 * negative.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", n);
	if (n > 0)
	{
		printf(" is positive");
	}
	else if (n == 0)
	{
		printf(" is zero");
	}
	else if (n < 0)
	{
		printf(" is negative");
	}
	printf("\n");
	return (0);
}
