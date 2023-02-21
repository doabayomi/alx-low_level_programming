#include <stdio.h>

/**
 * jack_bauer - Program to count from 00:00 to 23:59. Like the movie!
 *
 * Return: void
 */
void jack_bauer(void)
{
	/**
	 * The idea is to use two loop to print each hour and minute
	 * then a new line
	 */
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		printf("%02d", hours);
		for (minutes = 0; minutes < 60; minutes++)
		{
			printf("%02d", minutes);
		}
		printf("\n");
	}
}
