#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints an input string in reverse
 * @s: Pointer to the input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s) - 2;
	while (!(i < -1))
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
