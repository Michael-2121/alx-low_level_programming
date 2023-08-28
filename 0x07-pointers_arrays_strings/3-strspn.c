#include "main.h"
/**
 * _strspn - This function gets the length of a prefix substring
 * @s: input string
 * @accept: input substring
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = 0;
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
			{
				g++;
				break;
			}
			else if (accept[h + 1] == '\0')
				return (g);
		}
		s++;
	}
	return (g);
}

