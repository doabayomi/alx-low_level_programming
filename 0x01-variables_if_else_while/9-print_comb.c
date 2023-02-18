#include <stdio.h>

/**
 * main - Last time, the main function of C
 *
 * Description: This program prints all the combinations of
 * single digit numbers.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
			putchar(", ");
	}
	putchar('\n');
	return (0);
}
