#include "main.h"
/**
 * _strchr - This funtion locates a character in a string
 * @s: string
 * @c: character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int h = 0;

	for (; s[h] >= '\0'; h++)
	{
		if (s[h] == c)
			return (&s[h]);
	}
	return (0);
}

