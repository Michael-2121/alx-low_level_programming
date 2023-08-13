#include <stdio.h>
/**
 * main - the lowercase alphabet in reverse order
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char h;

	h = 'z'

	for (h = 'z'; h >= 'a'; h--)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
