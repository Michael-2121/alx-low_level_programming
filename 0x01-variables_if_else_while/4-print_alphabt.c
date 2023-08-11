#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase ecept q and e
 * Return: 0 (Success)
 */
int main(void)
{

	char x;

	x = 'a';

	while
		(x <= 'z') {
			if ((x != 'q' && x != 'e') && x <= 'z')
				putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
