#include "main.h"
/**
 * _strncat - This program concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int h;
	int g;

	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	g = 0;
	while (g < n && src[g] != '\0')
	{
	dest[h] = src[g];
	h++;
	g++;
	}
	dest[h] = '\0';
	return (dest);
}

