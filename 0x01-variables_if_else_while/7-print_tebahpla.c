#include <stdio.h>

/**
 * main - Main part of C
 *
 * Description: This program prints the alphabet backwards in
 * lowercase i.e. z to a.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
