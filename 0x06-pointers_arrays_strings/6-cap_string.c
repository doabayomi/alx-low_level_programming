#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * *cap_string - Capitalizes words in a string.
 * @str: Input String.
 *
 * Return: Pointer to the input string.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";
	int t_count = strlen(sep);
	bool is_lower, match_sep;

	for (i = 0; s[i] != '\0'; i++)
	{
		is_lower = s[i] >= 'a' && s[i] <= 'z';
		if (!(is_lower))
			continue;
		else
		{
			for (j = 0; j < t_count; j++)
			{
				match_sep = s[i - 1] == sep[j];
				if ((is_lower && match_sep) || i == 0)
					s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
