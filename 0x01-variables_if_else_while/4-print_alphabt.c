#include <stdio.h>

/**
 * main - I think this function is self-explainatory
 *
 * Description: This is a program that excludes e and q when
 * counting from a to z in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		/*Thought I'll experiment with the new if syntax */
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
