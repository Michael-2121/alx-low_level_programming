#include "main.h"
#include <stdio.h>

/**
 * print_buffer - This function prints a buffer
 * @b: buffer
 * @size: buffer size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int f, h, g;

	f = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (f < size)
	{
		h = size - f < 10 ? size - f : 10;
		printf("%08x: ", f);
		for (g = 0; g < 10; g++)
		{
			if (g < h)
				printf("%02x", *(b + f + g));
			else
				printf("  ");
			if (g % 2)
			{
				printf(" ");
			}
		}
		for (g = 0; g < h; g++)
		{
			int c = *(b + f + g);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		f += 10;
	}
}

