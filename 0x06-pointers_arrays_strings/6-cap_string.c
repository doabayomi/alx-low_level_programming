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
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";
	int len = strlen(sep);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
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
