#include "variadic_functions.h"

/**
 * sum_them_all - Program to sum all parameters
 * @n: Number of parameter to add
 * Return: Always (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		va_list arg;
		int sum = 0;

		va_start(arg, n);
		for (i = 0; i < n; i++)
			sum = sum + va_arg(arg, unsigned int);
		va_end(arg);
		return (sum);
	}
	else
		return (0);
}

