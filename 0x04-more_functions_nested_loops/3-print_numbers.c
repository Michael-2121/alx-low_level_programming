#include "main.h"
/**
 * print_numbers - This function print numbers from 0 trough 9
 * Return 0 Always
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
}
