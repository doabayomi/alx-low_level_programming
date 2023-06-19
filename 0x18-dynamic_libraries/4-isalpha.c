#include <stdio.h>

/**
 * _isalpha - determines whether a character is an alphabet
 * @c: Character to be evaluated
 *
 * Return: 1, if character is alphabetic and 0 otherwise
 */
int _isalpha(int c)
{
	char letter;

	letter = (char) c;
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
