#include "main.h"
/**
 * more_numbers - prints 10 times the value of 14 numbers
 * prints new line
 * Return: 0 Always
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i <= 10; i++)
{
	for (j = 0; j < 15; j++)
	{
		if (j >= 10)
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
	}
	_putchar('\n');
}
}