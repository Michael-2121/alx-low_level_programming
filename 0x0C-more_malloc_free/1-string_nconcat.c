#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - This function concatenates n bytes of a strin
 * @s1: Appending string
 * @s2: Concatenating string
 * @n: Size of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int g = 0, h = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		d = malloc(sizeof(char) * (l1 + n + 1));
	else
		d = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!d)
		return (NULL);

	while (g < l1)
	{
		d[g] = s1[g];
		g++;
	}

	while (n < l2 && g < (l1 + n))
		d[g++] = s2[h++];

	while (n >= l2 && g < (l1 + l2))
		d[g++] = s2[h++];

	d[g] = '\0';

	return (d);
}

