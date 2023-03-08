#include <stdio.h>

/**
 * find_sqrt - finds the sqrt recursively by another function.
 * @n: Input number
 * @root: Starting root as defined by a recursive caller.
 *
 * Return: The square root is it is a perfect square, -1 otherwise
*/
int find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root >= n)
		return (-1);

	return (find_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - Finds the square root of a number by calling another.
 * @n: Input number.
 *
 * Return: The natural square root of the number, -1 if the natural square
 * root does not exist.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 1));
}

