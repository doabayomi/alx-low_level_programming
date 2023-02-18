#include <stdio.h>

/**
 * main - The main function in C
 *
 * Description: The program counts from the letter a to z
 * in both uppercase and lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
