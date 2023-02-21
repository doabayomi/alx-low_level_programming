#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer.
 * @num: Number to be worked on
 *
 * Return: The last digit of the integer (num % 10)
 */
int print_last_digit(int num)
{
	/* The last digit is the remainder of the number when divided by 10 */
	last_digit = abs(num) % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
