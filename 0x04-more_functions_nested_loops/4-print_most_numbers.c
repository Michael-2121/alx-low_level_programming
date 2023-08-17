#include <main.h>
/**
 * print_most_numbers - print all numbers except 2 and 4
 *
 * Return: 0 Always
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2)
		{
			if (c != 4)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
