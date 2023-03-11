#include <stdio.h>
#include <string.h>

/**
 * *_strpbrk - Returns the first instance of a match on a string.
 * @s: The string that is searched through.
 * @accept: The character list to be searched.
 *
 * Return: Pointer to first instance if there is a match, and NULL otherwise.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, match = 0;
	int s_len = strlen(s);
	int match_set = strlen(accept);

	/* We make the loop break at the first instance of the char */
	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < match_set; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (match == 1)
		{
			break;
		}
	}

	/* Returning the values based on the match */
	if (match == 1)
		return (s + i);
	else
		return (NULL);
}
