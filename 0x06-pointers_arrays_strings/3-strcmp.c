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
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (len1 > len2)
		return (15);
	else if (len1 < len2)
		return (-15);
	else
		return (0);
}
