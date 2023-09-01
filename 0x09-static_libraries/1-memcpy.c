#include "main.h"
/**
 *_memcpy - This function copies memory area
 *@dest: Where the memory is stored
 *@src: Where the memory is copied to
 *@n: size of bytes
 *
 *Return: copied memory with no of bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int g = 0;
	int h = n;

	for (; g < h; g++)
	{
		dest[g] = src[g];
		n--;
	}
	return (dest);
}
