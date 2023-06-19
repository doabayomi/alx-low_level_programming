
#include <stdio.h>

/**
 * _isdigit - Checks whether a character is a digit.
 * @c: Character to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	char l;

	l = (char) c;
	if (l >= '0' && l <= '9')
		return (1);
	else
		return (0);
}
