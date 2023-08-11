#include <stdio.h>
/**
 * main - Entry point
 *Description: the program returns all alphabets of english language
 *
 * Rrturn: Always 0 (Success)
 */

int main(void)
{
	char y = 'a';

	while (y <= 'z')
		{
		putchar(y);
		y++;
		}
	putchar('\n');
	return (0);
}
