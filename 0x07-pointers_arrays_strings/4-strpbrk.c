#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: input string
 * @accept: input string
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
		if (*s == accept[h])
		return (s);
		}
	s++;
	}
	return ('\0');
}

