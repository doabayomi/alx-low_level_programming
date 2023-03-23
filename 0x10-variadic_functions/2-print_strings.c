#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints an indefinite list of strings given to it.
 * @separator: Separator for the list of strings.
 * @n: No of string to print.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list p;
	char *s;

	if (n <= 0 || separator == NULL)
		return;

	va_start(p, n);
	for (; i <= n; i++)
	{
		s = va_arg(p, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != n)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
