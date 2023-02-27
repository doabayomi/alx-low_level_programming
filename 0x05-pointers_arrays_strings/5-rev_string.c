#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string through a pointer.
 * @s: Pointer to the input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, count;
	char tmp = s[0];

	count = strlen(s);
	for (i = 0; i < count; i++)
	{
		count--;
		tmp = s[i];
		s[i] = s[count];
		s[count] = tmp;
	}
}
