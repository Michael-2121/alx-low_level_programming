#include <stdlib.h>
#include "main.h"

/**
 * *_memset - This function fills memory with a constant byte
 * @s: memory area that will be filled
 * @b: character to copy
 * @n: howm many times to copy the number
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * *_calloc - This function allocates memory for an array
 * @nmemb: element number in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pr = malloc(size * nmemb);

	if (pr == NULL)
		return (NULL);

	_memset(pr, 0, nmemb * size);

	return (pr);
}

