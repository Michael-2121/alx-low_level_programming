#include <stdio.h>
/**
 * main - the lowercase alphabet in reverse order
 *
 * return: 0 Always
 */
int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
