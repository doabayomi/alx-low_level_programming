#include <stdio.h>

/**
 * main - the main function of C
 * @str[]: String to be sent to output terminal
 *
 * Description: A program that prints a string without printf() or
 * puts() followed by a new line, to standard error.
 * Return: 1 always
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(str, sizeof(char), sizeof(str) - 1, stdout);
	fflush(stdout);	
	return (1);
}
