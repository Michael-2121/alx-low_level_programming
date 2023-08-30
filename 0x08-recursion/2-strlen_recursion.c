#include "main.h"
/**
 * _strlen_recursion - This function returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int grants = 0;

	if (*s)
	{
		grants++;
		grants += _strlen_recursion(s + 1);
	}

	return (grants);
}

