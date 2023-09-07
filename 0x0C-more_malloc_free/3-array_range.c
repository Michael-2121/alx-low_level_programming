#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Function that creates an array of integers
 * @min: smallest range of values stored
 * @max: Largest range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pr;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pr = malloc(sizeof(int) * size);

	if (pr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pr[j] = min++;

	return (pr);
}

