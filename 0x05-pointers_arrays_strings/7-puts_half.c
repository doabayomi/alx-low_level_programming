#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints bottom half of a string.
 * @str: Pointer to the input string
 *
 * Description: Assuming l is the length of the string and n is the number of
 * characters to be printed, n is l/2, if l is even and (l-1)/2 if l is odd.
 * The bottom half of the string is what is printed i.e. n to the last.
 * Return: void
 */
void puts_half(char *str)
{
	int len, n, i;

	/* Here, len is the length of the string input to the function */
	len = strlen(str);
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	/* Here i is the index of the string on the array. (start point) */
	i = len - n;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
