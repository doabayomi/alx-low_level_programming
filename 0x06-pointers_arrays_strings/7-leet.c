#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * *leet - Encodes a string into 1337.
 * @str: String to be encoded
 *
 * Return: Pointer to the string
 */
char *leet(char *str)
{
	char from[] = {'a', 'e', 'o', 't', 'l'};
	char to[] = {'4', '3', '0', '7', '1'};
	int i, j, len;

	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == from[j] || str[i] == toupper(from[j]))
				str[i] = to[j];
		}
	}

	return (str);
}
