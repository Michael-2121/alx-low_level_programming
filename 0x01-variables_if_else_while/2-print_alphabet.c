#include <stdio.h>
/**
 * main - The program returns all alphabets of english language
 *
 * Rrturn: Always 0 (Success)
 */

int main(void)
{
	char y[26] = "abcdeafghijklmnopqrstuvwxyz";
	int i;

	for (i >= 0; i < 26; i++)
		{
		putchar(y[i]);

		}
	putchar('\n');
	return (0);
}
