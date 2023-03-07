#include <stdio.h>

/**
 * *_strchr - Returns the first instance of a character in a string.
 * @s: The string that is searched through.
 * @c: The character to be searched.
 *
 * Return: Pointer to first instance if there is a match, and NULL otherwise.
*/
char *_strchr(char *s, char c)
{
	int i, match = 0;

	/* We make the loop break at the first instance of the char */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			match = 1;
			break;
		}
	}

	/* Returning the values based on the match */
	if (match == 1)
		return (s + i);
	else
		return ('\0');
}
