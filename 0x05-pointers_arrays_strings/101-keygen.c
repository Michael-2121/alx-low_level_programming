#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 * passwords for the program 101-crackme
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int pass[100];
	int h, sum, g;

	sum = 0;

	srand(time(NULL));

	for (h = 0; h < 100; h++)
	{
		pass[h] = rand() % 78;
		sum += (pass[h] + '0');
		putchar(pass[h] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			g = 2772 - sum - '0';
			sum += g;
			putchar(g + '0');
			break;
		}
	}

	return (0);
}

