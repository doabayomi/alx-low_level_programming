#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * match_sep - checks if a character is a defined seperator.
 * @l: Input String.
 *
 * Return: true if there is a match, false otherwise.
 */

bool match_sep(char l)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	int no_cases = 13;

	for (; i < no_cases; i++)
	{
		if (l == sep[i])
			return (true);
	}
	return (false);
}

/**
 * *cap_string - Capitalizes words in a string.
 * @str: Input String.
 *
 * Return: Pointer to the input string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (match_sep(str[i - 1]) || i == 0)
			str[i] -= 32;

		i++;
	}

	return (str);
}
