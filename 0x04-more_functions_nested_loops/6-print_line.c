#include "main.h"

/**
 * print_line - prints streght line
 * @n: is the number of lines
 * Return: 0 Always
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
