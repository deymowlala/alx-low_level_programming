#include "main.h"
/**
 * _pow_recursion - Function that returns the value
 * of x raised to the power of y
 * @x: Value to be returned
 * @y: Value to be returned
 * Return: Always (0)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
