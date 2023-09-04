#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function gets end of input and add together the sizes
 * @s1: First variable to concatinate
 * @s2: Second variable to concatinate
 * Return: concatination of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concati;
	int j, br;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = br = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[br] != '\0')
		br++;
	concati = malloc(sizeof(char) * (j + br + 1));

	if (concati == NULL)
		return (NULL);
	j = br = 0;
	while (s1[j] != '\0')
	{
		concati[j] = s1[j];
		j++;
	}

	while (s2[br] != '\0')
	{
		concati[j] = s2[br];
		j++, br++;
	}
	concati[j] = '\0';
	return (concati);
}

