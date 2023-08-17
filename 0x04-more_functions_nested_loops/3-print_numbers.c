#include "main.h"
/**
 * print_numbers - This function print numbers from 0 trough 9
 * Return: 0 Always
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
