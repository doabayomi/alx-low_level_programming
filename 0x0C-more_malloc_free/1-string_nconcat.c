#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to be concatenated.
 *
 * Description: The function concatenates s1 and the first n bytes of s2
 * and returns it as a pointer derived from malloc.
 * Return: pointer to concatenated string. NULL if malloc fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	res = (char *)malloc(((len1 + n) * sizeof(char)) + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (i = 0; i < n; i++)
		res[len1 + i] = s2[i];

	res[len1 + i] = '\0';
	return (res);
}
