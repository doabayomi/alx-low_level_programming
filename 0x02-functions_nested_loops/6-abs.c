#include <math.h>
#include <stdlib.h>
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

	/**
	 * The absolute value can be found by squaring the number and
	 * finding the square root.
	 */
	abs_val = (num * num) / num;
	return (abs_val);
}




