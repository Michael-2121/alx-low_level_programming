#include <stdio.h>
/**
 * main - The program returns all alphabets of english language
 *
 * Rrturn: Always 0 (Success)
 */

int main(void)
{
	char y = 'a';

	for (y <= 'z')
		{
		putchar(y);
		y++;
		}
	putchar('\n');

	return (0);
}
