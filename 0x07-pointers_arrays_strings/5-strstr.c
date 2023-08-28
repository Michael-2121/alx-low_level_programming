#include "main.h"
/**
 * _strstr - This function locates a substring
 * @haystack: input string
 * @needle: input substring
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *g = needle;

		while (*h == *g && *g != '\0')
		{
			h++;
			g++;
		}

		if (*g == '\0')
			return (haystack);
	}
	return (0);
}

