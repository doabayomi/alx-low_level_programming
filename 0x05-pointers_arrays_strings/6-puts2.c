#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Prints every other character in a string (even characters)
 * @str: Pointer to the input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	len = strlen(str);
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
