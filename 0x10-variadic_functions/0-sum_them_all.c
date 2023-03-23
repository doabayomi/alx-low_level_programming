#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums an indefinite list of numbers
 * @n: Number of arguments to function
 *
 * Return: 0 if n == 0, otherwise the sum of the inputs.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list p;

	if (n <= 0)
		return (0);

	va_start(p, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(p, int);

	va_end(p);
	return (sum);
}
