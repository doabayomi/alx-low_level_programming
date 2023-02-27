#include <stdio.h>

/**
 * _strlen - counts the length of an input string.
 * @s: Pointer to the input string
 *
 * Return: length of the input string
 */
int _strlen(char *s)
{
	/**
	 * sizeof() will not work in this case as basically all pointers are
	 * 8 bytes in size. Also it is impossible to index a pointer
	 * i.e. *ptr[1] is impossible. This is also because the pointer was
	 * assigned to a value and not its address.
	 *
	 * The approach now is to use a for loop to count until it sees a
	 * null escape character '\0' which automatically exists in double
	 * quotes "".
	 */
	int len;

	for (len = 1; *s != '\0'; len++)
		*s++;
	return (len);
}

