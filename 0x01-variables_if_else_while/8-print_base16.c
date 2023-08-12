#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;

	for (a = 79; a < 89; a++)
		{
		putchar(a);
		}
	for (b = 97; b < 103; b++)
		{
		putchar(b);
		}

	putchar('\n');
	return (0);
}
