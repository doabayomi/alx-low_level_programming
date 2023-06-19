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
	int i;

	/* We make the loop break and return the pointer if there is a match */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);

	/* If it goes through wihout a match returns NULL */
	return (NULL);
}
