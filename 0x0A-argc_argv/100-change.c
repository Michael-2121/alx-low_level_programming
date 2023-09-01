#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This function prints the smallest  number of coins to
 * make change for an amount of money
 * @argc: arguments numbering
 * @argv: arguments array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cnt, h, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cnt = atoi(argv[1]);
	result = 0;

	if (cnt < 0)
	{
		printf("0\n");
		return (0);
	}

	for (h = 0; h < 5 && cnt >= 0; h++)
	{
		while (cnt >= coins[h])
		{
			result++;
			cnt -= coins[h];
		}
	}

	printf("%d\n", result);
	return (0);
}
