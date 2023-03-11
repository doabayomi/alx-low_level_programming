
#include <stdio.h>

/**
 * _islower - determines whether a character is lowercase
 * @c: Character to be evaluated
 *
 * Return: 1, if lowercase and 0 otherwise
 */
int _islower(int c)
{
	char letter;

	letter = (char) c;
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
