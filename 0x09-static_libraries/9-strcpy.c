
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies the contents of a string from one variable to the other.
 * @dest: Pointer to the destination.
 * @src: Pointer to te source
 * n: No of elements to print.
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	/**
	 * The idea here is that sizeof() when used on a string returns the
	 * length of the string plus the null excape character so, I am
	 * basically replicating sizeof for the pointer and then using memcpy
	 * to put the data in the destination.
	 */
	memcpy(dest, src, (strlen(src) + 1));
	return (dest);
}
