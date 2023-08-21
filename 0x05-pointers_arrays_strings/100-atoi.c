#include "main.h"

/**
 * _atoi - This function converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int h, j, x, len, y, digit;

	h = 0;
	j = 0;
	x = 0;
	len = 0;
	y = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (h < len && y == 0)
	{
		if (s[h] == '-')
			++j;

		if (s[h] >= '0' && s[h] <= '9')
		{
			digit = s[h] - '0';
			if (j % 2)
				digit = -digit;
			x = x * 10 + digit;
			y = 1;
			if (s[h + 1] < '0' || s[h + 1] > '9')
				break;
			y = 0;
		}
		h++;
	}

	if (y == 0)
		return (0);

	return (x);
}

