#include <stdio.h>
#include <string.h>

/**
 * _strspn - Returns the number of matches from the first instance.
 * @s: The string that is searched through.
 * @accept: The characters to be searched.
 *
 * Description: It checks for the number of matches from the first instance of
 * a string and returns the number of consecutive matches
 * Return: Returns number of matches if match, 0 otherwise
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int match_set = strlen(accept);
	unsigned int i = 0, j = 0, match = 0, next = 0;

	while (s[i] != '\0')
	{
		/* Confirming if the current character is a match */
		for (; j < match_set; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
		}
		/* Breaking if first instance fails to match */
		if (i == 0 && match == 0)
			break;
		/**
		 * Confirming next instance match to determine course of
		 * action (continuing or breaking loop)
		*/
		for (j = 0; j < match_set; j++)
		{
			if (s[i + 1] == accept[j])
			{
				next = 1;
				break;
			}
		}
		if (next == 1)
			i++;
		else
			break;
	}
	return (match);
}
