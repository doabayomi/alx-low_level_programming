#include <stdio.h>

/**
 * check_prime - Finds whether a number is a prime number indirectly.
 * @n: Input number.
 * @div: Divisor as determined by another function.
 *
 * Return: 1 if te number is prime, 0 otherwise
*/
int check_prime(int n, int div)
{
	if (div <= (n / 2))
	{
		if (n % div == 0)
			return (0);
		div++;
		return (check_prime(n, div));
	}

	return (1);
}

/**
 * is_prime_number - Finds whether number is prime indirectly.
 * @n: Input number.
 *
 * Return: 1 if te number is prime, 0 if number is 1, less than 1 or not a
 * prime number
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 3));
}
