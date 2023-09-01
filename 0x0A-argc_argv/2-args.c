#include <stdio.h>
#include "main.h"

/**
 * main - This function prints all arguments passed to it
 * @argc: number of arguments passed
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int h;

	for (h = 0; h < argc; h++)
	{
		printf("%s\n", argv[h]);
	}

	return (0);
}
