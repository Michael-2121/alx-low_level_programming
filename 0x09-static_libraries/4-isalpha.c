#include "main.h"
/**
 * _isalpha - This function will check for alphabets in a character
 * @c: the given character that will be checked
 * Return: 0 if c is not a letter, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

