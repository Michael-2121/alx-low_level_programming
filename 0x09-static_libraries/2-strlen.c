#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: required string
 * Return: length
 */
int _strlen(char *s)
{
	int longh = 0;

	while (*s != '\0')
	{
		longh++;
		s++;
	}

	return (longh);
}

