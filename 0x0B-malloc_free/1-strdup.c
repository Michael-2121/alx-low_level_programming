#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function duplicates to new memory space location
 * @str: character to duplicate
 * Return: 0 Always
 */
char *_strdup(char *str)
{
	char *ddd;
	int j, g = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	ddd = malloc(sizeof(char) * (j + 1));

	if (ddd == NULL)
		return (NULL);

	for (g = 0; str[g]; g++)
		ddd[g] = str[g];

	return (ddd);
}

