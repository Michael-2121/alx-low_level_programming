#include <stdio.h>
#include "main.h"

/**
 * main - This function prints the name of the program
 * @argc: arguments number count
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
