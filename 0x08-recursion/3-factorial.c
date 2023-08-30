#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: Numberwhose factorial will be returned
 * Return: Always (0)
 */

int factorial(int n)
{
	if (n != '\0')
	{
		return (1 + factorial(n - 1));
	}
	else if (n < 0)
		return (-1);
	return (0);
}
