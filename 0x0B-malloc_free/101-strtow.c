#include <stdlib.h>
#include "main.h"

/**
 * count_word - function assist to count the number of words in a string
 * @s: string to be evaluated
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int black, g, h;

	black = 0;
	h = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			black = 0;
		else if (black == 0)
		{
			black = 1;
			h++;
		}
	}

	return (h);
}
/**
 * **strtow - function that splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, n = 0, len = 0, words, g = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (g)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (g + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[n] = tmp - g;
				n++;
				g = 0;
			}
		}
		else if (g++ == 0)
			start = j;
	}

	matrix[n] = NULL;

	return (matrix);
}

