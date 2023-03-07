#include <stdio.h>

/**
 * set_string - Sets the value of a pointer.
 * @s: The pointer.
 * @to: The char being pointed to.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
