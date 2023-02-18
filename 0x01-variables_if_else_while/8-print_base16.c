#include <stdio.h>

/**
 * main - We all know what this is
 *
 * Description: This program prints all the values of base
 * 16 from 0 to 9 and then a to f.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
