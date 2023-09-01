#include <stdio.h>
#include "main.h"

/**
 * _atoi - This function converts a string to an integer
 * @s: string variable
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int h, g, j, len, b, digit;

	h = 0;
	g = 0;
	j = 0;
	len = 0;
	b = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (h < len && b == 0)
	{
		if (s[h] == '-')
			++g;

		if (s[h] >= '0' && s[h] <= '9')
		{
			digit = s[h] - '0';
			if (g % 2)
				digit = -digit;
			j = j * 10 + digit;
			b = 1;
			if (s[h + 1] < '0' || s[h + 1] > '9')
				break;
			b = 0;
		}
		h++;
	}

	if (b == 0)
		return (0);

	return (j);
}

/**
 * main - This function multiplies two numbers
 * @argc: number of given arguments
 * @argv: arguments array
 *
 * Return: 0 (Success), 1 (otherwise)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
