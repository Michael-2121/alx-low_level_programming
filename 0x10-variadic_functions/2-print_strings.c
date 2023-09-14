#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: NULL separators are printed, otherwise.
 * If one of the strings if NULL, (nil) it's printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strn;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		strn = va_arg(strings, char *);

		if (strn == NULL)
			printf("(nil)");
		else
			printf("%s", strn);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

