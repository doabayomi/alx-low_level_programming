#include <stdio.h>
#include "main.h"

/**
 * _puts - prints an input string and a newline
 * @str: Pointer to the input string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	/* Don't forget the new line */
	_putchar('\n');
}
