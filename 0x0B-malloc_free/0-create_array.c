#include "main.h"
#include <stdlib.h>
/**
 * create_array - Array function of size size and assign char c
 * @size: array size
 * @c: char to assign
 * Description: array of size size and assign char c
 * Return: pointer to array, NULL if otherwise
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}

