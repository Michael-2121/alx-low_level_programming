#include "main.h"

/**
 * print_array - This function prints n elements of an array
 * @a: array name
 * @n: number of elements in the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < (n - 1); h++)
	{
		printf("%d, ", a[h]);
	}
		if (h == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

