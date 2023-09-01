#include "main.h"
/**
 * _strpbrk - This function accepts char value
 * @s: input value
 * @accept: iitial value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
				return (s);
		}
		s++;
	}
	return ('\0');
}
