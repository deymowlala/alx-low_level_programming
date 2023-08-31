#include "main.h"

/**
 * _sqrt_recursion - Function that returns the
 * natural square root of a number
 * @n: Number whose square root is to be determined
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Reurses to find
 * the natural square root of a number
 * @n: Number whose square root is to be determined
 * @j: iterator
 * Return: The square root
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j = 1));
}
