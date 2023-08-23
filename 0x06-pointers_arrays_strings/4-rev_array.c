#include "main.h"
/**
 * reverse_array - This function reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int h;
	int g;

	for (h = 0; h < n--; h++)
	{
		g = a[h];
		a[h] = a[n];
		a[n] = g;
	}
}

