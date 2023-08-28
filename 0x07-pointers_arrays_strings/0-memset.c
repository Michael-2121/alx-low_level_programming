#include "main.h"
/**
 * _memset - This function fills memory with a constant bite value
 * @s: pointer character
 * @b: the required constant byte
 * @n: number of bytes to be filled
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int h = 0;

	for (; n > 0; h++)
	{
		s[h] = b;
		n--;
	}
	return (s);
}

