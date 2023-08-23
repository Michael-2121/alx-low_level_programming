#include "main.h"
#include <stdio.h>

/**
 * rot13 - This funtion encodes a string using rot13
 * @s: pointer to string parameters
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int g;
	int h;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (g = 0; s[g] != '\0'; g++)
	{
		for (h = 0; h < 52; h++)
		{
			if (s[g] == data1[h])
			{
				s[g] = datarot[h];
				break;
			}
		}
	}
	return (s);
}

