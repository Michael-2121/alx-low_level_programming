#include "main.h"

/**
 * more_numbers - prints 10 times the value of 14 numbers
 * prints new line
 * Return: 0 Always
 */

void more_numbers(void)
{

int m, n;
	for (m = 1; m <= 14; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
