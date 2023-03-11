#include <stdio.h>
#include <string.h>

/**
 * *_strstr - Returns the first instance of a substring in a string.
 * @haystack: The string that is searched through.
 * @needle: The substring to be searched.
 *
 * Return: Pointer to first instance if there is a match, and NULL otherwise.
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, c;
	int n_len = strlen(needle), matches = 0;

	while (haystack[i] != '\0')
	{
		/**
		 * This checks for each index of the haystack whether
		 * there is a matching needle in order to get the first
		 * match.
		*/
		for (c = 0; c < n_len; c++)
		{
			j = c + i;
			if (haystack[j] == needle[c])
				matches++;
		}

		/**
		 * This increases the index when there is no match or
		 * breaks the loop when there is a match.
		*/
		if (matches != n_len)
		{
			i++;
			matches = 0;
		}
		else
			break;
	}

	/* The final verdict after the loop. */
	if (matches == n_len)
		return (haystack + i);
	else
		return (NULL);
}
