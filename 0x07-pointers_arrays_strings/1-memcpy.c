#include "main.h"
/**
 * _memcpy - This function copies memory area
 * @dest: where the memory is stored
 * @src: where memory is copied
 * *@n: the requred number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int g = n;

	for (; h < g; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}

