#include <stdio.h>
#include <string.h>

/**
 * *cap_string - Capitalizes words in a string.
 * @str: Input String.
 *
 * Return: Pointer to the input string.
 */
char *cap_string(char *str)
{
	int i, j, len = strlen(str);
	char sep[] = " \t\n,;.!?\"(){}";
	int t_count = strlen(sep);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < t_count; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}

	return (str);
}
