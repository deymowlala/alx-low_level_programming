#include "main.h"

/**
 * checkers - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @j: base number to check
 * Return: natural square root of number base
 */
int checkers(int n, int j)
{
	if (n * n == j)
		return (n);
	if (n * n > j)
		return (-1);
	return (checkers(n + 1, j));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (checkers(1, n));
}
