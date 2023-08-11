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

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("The last digit of %d is %d and it's greater than 5\n", n, m);
	if (m == 0)
		printf("The last digit of %d is %d it's 0\n", n, m);
	if (m < 6 && m != 0)
		printf("The last digit of %d is %d it's less than 6 but not 0\n", n, m);
	return (0);
}
