#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: input integer
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, g, h = 0, p = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (g = 0; av[j][g]; g++)
			p++;
	}
	p += ac;

	str = malloc(sizeof(char) * p + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (g = 0; av[j][g]; g++)
	{
		str[h] = av[j][g];
		h++;
	}
	if (str[h] == '\0')
	{
		str[h++] = '\n';
	}
	}
	return (str);
}

