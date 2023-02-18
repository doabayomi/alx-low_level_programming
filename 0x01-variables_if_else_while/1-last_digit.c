#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - the standard main function in c
 * @n: The random variable I'm working with.
 * @l: The last digit of n
 *
 * Description: This is a program that prints whether n is 
 * greater than, equal to, and less than 5
 * Return: 0  
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	printf("Last digit of %d is ", n);
	printf("%d", l);
	if (l > 5)
	{
		printf("and is greater than 5");
	}
	else if (l == 0)
	{
		printf("and is 0");	
	}
	else if (l < 6 && l != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
