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
	unsigned int i = 0, j, matches = 0;
	unsigned int match_set = strlen(accept);

	for (; s[i] != '\0'; i++)
	{
		int next = 0;

		for (j = 0; j < match_set; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}
		}

		if (i == 0 && matches == 0)
			break;

		for (j = 0; j < match_set; j++)
		{
			if (s[i + 1] == accept[j])
			{
				next = 1;
				break;
			}
		}

		if (next == 1)
			continue;
		else
			break;
	}
	return (matches);
}
