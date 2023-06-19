#include <stdio.h>

/**
 * _isupper - Checks whether a character is uppercase.
 * @c: Character to be evaluated
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char l;

	l = (char) c;
	if (l >= 'A' && l <= 'Z')
		return (1);
	else
		return (0);
}
