#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: Input string to be printed.
 *
 * Return: void
*/
int tmp = 0;
void _puts_recursion(char *s)
{
	if (s[tmp] != '\0')
	{
		_putchar(s[tmp]);
		tmp++;
		return(_puts_recursion(s));
	}
	else
	{
		_putchar('\n');
		tmp = 0;
	}
}
