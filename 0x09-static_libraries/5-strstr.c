#include "main.h"
/**
 * _strstr - This function increaments variables
 * @haystack: initial value
 * @needle: initial value
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *g = haystack;
		char *h = needle;

		while (*g == *h && *h != '\0')
		{
			g++;
			h++;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (0);
}

