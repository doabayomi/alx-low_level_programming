#include <stdio.h>

/**
 * main - I am getting tired of this
 *
 * Description: This program basically does the
 * same thing as the previous file except it uses
 * putchar()
 * Return: 0
 */
int main(void)
{
	int i;

	/*The new syntax ain't bad. */
	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}
