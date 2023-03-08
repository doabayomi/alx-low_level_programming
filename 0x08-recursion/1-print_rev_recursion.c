#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: Input string to print in reverse.
 *
 * Return: void
*/
int len, count = 0;
void _print_rev_recursion(char *s)
{
	if (count == 0)
		len = strlen(s);

	if (!(len < 0))
	{
		_putchar(s[len]);
		len--;
		count++;
		return (_print_rev_recursion(s));
	}
	else
	{
		len = 0;
		count = 0;
	}
}
