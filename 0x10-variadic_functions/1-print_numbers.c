#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints an indefinite list of numbers.
 * @separator: Custom seperator to list of numbers.
 * @n: Number of arguments to function
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1, num;
	va_list p;

	va_start(p, n);
	for (; i <= n; i++)
	{
		num = va_arg(p, int);
		printf("%d", num);
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
