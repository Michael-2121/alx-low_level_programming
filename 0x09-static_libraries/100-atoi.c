#include "main.h"
/**
 * _atoi - This function converts a string into an integer.
 *
 * @s: given string
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int seen = 1, g = 0;
	unsigned int men = 0;

	while (!(s[g] <= '9' && s[g] >= '0') && s[g] != '\0')
	{
		if (s[g] == '-')
			seen *= -1;
		g++;
	}
	while (s[g] <= '9' && (s[g] >= '0' && s[g] != '\0'))
	{
		men = (men * 10) + (s[g] - '0');
		g++;
	}
	men *= seen;
	return (men);
}
