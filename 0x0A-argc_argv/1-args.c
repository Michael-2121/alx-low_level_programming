#include <stdio.h>
#include "main.h"

/**
 * main - function prints the number of arguments given the program
 * @argc: number of arguments passed
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
