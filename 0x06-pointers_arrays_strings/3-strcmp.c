#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 15 if first string is larger, -15 if first string is smaller, 0
 * equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, n = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			n = (int) (s1[i] - s2[i]);
			break;
		}
		i++;
	}

	return (n);
}
