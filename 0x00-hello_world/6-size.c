#include<stdio.h>

/**
 * main - The standard main function of C
 * Description: This is a program that prints the sizes of various data types
 * in C measured in bytes. This value will vary based on operating system.
 * Return: 0
 */
int main(void)
{
	char charvar;
	int intvar;
	long int longvar;
	long long int doublelongvar;
	float floatvar;

	printf("Size of a char: %zu byte(s)\n", sizeof(charvar));
	printf("Size of an int: %zu byte(s)\n", sizeof(intvar));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longvar));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(doublelongvar));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatvar));
	return (0);
}
