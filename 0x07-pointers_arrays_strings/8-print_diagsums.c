#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, g;

	sum1 = 0;
	sum2 = 0;

	for (g = 0; g < size; g++)
	{
		sum1 = sum1 + a[g * size + g];
	}
	for (g = size - 1; g >= 0; g--)
	{
		sum2 += a[g * size + (size - g - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
