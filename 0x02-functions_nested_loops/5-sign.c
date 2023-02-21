#include <stdio.h>
#include "main.h"

/**
 * print_sign - Determine whether a number is positive, negative or zero.
 * @n: Number to be evaluated.
 *
 * Return: 1 if the number is positive, -1 if negative, 0 if zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
