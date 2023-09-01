#include "main.h"
/**
 * _strncpy - This function will copy a string
 * @dest: initial value
 * @src: initial value
 * @n: initial value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h;

	h = 0;
	while (h < n && src[h] != '\0')
	{
		dest[h] = src[h];
		h++;
	}
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}
	return (dest);
}

