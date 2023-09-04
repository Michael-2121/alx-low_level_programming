#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns pointer to 2 dim array of integer
 * @width: input width
 * @height: height of input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **sim;
	int g, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	sim = malloc(sizeof(int *) * height);

	if (sim == NULL)
		return (NULL);

	for (g = 0; g < height; g++)
	{
		sim[g] = malloc(sizeof(int) * width);

		if (sim[g] == NULL)
		{
			for (; g >= 0; g--)
				free(sim[g]);

			free(sim);
			return (NULL);
		}
	}

	for (g = 0; g < height; g++)
	{
		for (h = 0; h < width; h++)
			sim[g][h] = 0;
	}

	return (sim);
}

