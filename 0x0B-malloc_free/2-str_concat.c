#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - joins two strings together
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to concatenated string.
 * NULL if space is insufficient.
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, len1, len2;

	/* Turning NULL strings as empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	res = (char *)malloc(((len1 + len2) * sizeof(char)) + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (i = 0; i < (len2 + 1); i++)
		res[len1 + i] = s2[i];

	return (res);
}
