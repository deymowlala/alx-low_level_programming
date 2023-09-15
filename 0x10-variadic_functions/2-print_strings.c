#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Program to print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed as parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *held;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		held = va_arg(arg, char*);
		if (held == NULL)
			printf("(nil)");
		else
			printf("%s", held);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}
