#include "main.h"
/**
 * puts_half - This function prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int h, n, longi;

	longi = 0;

	for (h = 0; str[h] != '\0'; h++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (h = n; str[h] != '\0'; h++)
		_putchar(str[h]);
	_putchar('\n');
}

