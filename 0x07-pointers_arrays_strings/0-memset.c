#include <stdio.h>

/**
 * *_memset - sets the first n bytes of an array to a character.
 * @s: String to be worked on
 * @b: The character that will be set to.
 * @n: The number of bytes that it should set to.
 *
 * Return: The pointer to the input string.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
