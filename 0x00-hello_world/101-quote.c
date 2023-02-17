#include <stdio.h>

/**
 * main - the main function of C
 * Description: A program that prints a string without printf() or
 * puts() followed by a new line, to standard error.
 * Return: 1 always
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
