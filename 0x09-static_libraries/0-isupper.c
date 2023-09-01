#include "main.h"
/**
 * _isupper - function to sellect uppercase letters
 * @c: character to check
 *
 * Return: if its not upper case 0 else 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

