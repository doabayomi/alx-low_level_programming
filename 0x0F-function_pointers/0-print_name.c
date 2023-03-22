#include <stdio.h>

/**
 * print_name - prints a name using an external function
 * @name: Name to be printed
 * @f(char): Function to print the name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
