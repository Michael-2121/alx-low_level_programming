#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers using control moduler
 * Description: Print and using modulars of 5 and 3
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * FizzBuzz for multiples of 15
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)

	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
