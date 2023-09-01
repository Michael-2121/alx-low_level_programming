#include "main.h"
/**
 * _memset - function fills for block of memory with a defined value
 * @s: starting address of memory to be filled
 * @b: the required char
 * @n: size of bytes to be changed
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int g = 0;

	for (; n > 0; g++)
	{
		s[g] = b;
		n--;
	}
	return (s);
}
