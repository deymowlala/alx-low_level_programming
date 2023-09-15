#include "variadic_functions.h"

/**
 * print_numbers - Function that prints number followed by a new line
 * @separator: string to be printer between numbers
 * @n: Number of integers passed to the function
 * Return: Always (0)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argu;

	va_start(argu, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argu, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(argu);
}
