#include <stdio.h>

/**
 * *string_toupper - Convert a string to uppercase.
 * @str: String to converted to uppercase.
 *
 * Return: Pointer to the input string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
