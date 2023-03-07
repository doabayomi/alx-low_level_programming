#include <stdio.h>

/**
 * printnum - prints an integer using the defined _putchar
 * @n: Number to be printed
 *
 * Return: void;
*/
void printnum(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnum(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_diagsums - prints the sums of the diagonals of an array.
 * @a: The array to be worked with.
 * @size: The size of the array.
 *
 * Return: void.
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
	}

	for (i = 1; i <= size; i++)
	{
		sum2 += a[(size * i) - i];
	}

	printnum(sum1);
	_putchar(',');
	_putchar(' ');
	printnum(sum2);
	_putchar('\n');
}
