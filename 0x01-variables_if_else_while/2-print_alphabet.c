#include <stdio.h>

/**
 * main - the standard function of main in c
 *
 * Description: This program prints the the entire alphabet
 * from a to z in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
