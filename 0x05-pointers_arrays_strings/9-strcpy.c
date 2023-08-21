#include "main.h"

/**
 * char *_strcpy - This function copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int j = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; j < h ; j++)
	{
		dest[j] = src[j];
	}
	dest[h] = '\0';
	return (dest);
}

