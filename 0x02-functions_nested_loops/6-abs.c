#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - Prints the absolute value of an integer
 * @num: Number to be worked on
 *
 * Return: The last digit of the integer (num % 10)
 */
int _abs(int num)
{
	int abs_val;
	double tmp;

	/**
	 * The absolute value can be found by squaring the number and
	 * finding the square root.
	 */
	tmp = (num * num);
	abs_val = (int)sqrt(tmp);
	return (abs_val);
}


