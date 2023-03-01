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
		if (!(str[i]  >= 'a' && str[i] <= 'z'))
			continue;
		else
		{
			for (j = 0; j < t_count; j++)
			{
				if (str[i] == sep[j])
				{
					str[i - 1] = str[i - 1] - 32;
				}
			}
		}
	}

	return (str);
}
