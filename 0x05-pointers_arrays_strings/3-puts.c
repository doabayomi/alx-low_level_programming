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
	for (; *str != '\0'; *str++)
		_putchar(*str);
	/* Don't forget the new line */
	_putchar('\n');
}
