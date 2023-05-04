#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: The input number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* The idea is to divide by two until it is 1 or 0 */
	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
