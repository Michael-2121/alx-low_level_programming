#include "main.h"
/**
 * _strchr - This function creates char
 * @s: input pointer
 * @c: input char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (&s[g]);
	}
	return (0);
}
