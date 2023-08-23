#include "main.h"
/**
 * leet - This function encode a string into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int g, h;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (g = 0; n[g] != '\0'; g++)
	{
		for (h = 0; h < 10; h++)
		{
			if (n[g] == s1[h])
			{
				n[g] = s2[h];
			}
		}
	}
	return (n);
}

