#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns random number to n each time and analyse it's outcome
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	int h;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	h = n % 10;
	if (h > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, h);
	if (h == 0)
		printf("Last digit of %d is %d is 0\n", n, h);
	if (h < 6 && h != 0)
		printf("Last digit of %d is %d is less than 6 but not 0\n", n, h);
	return (0);
}
