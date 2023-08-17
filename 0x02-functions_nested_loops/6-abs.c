#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer
 * @c: The numer to be computed
 * Return: Always 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_vl;

		abs_vl = c * -1;
		return (abs_vl);
	}
	return (c);
}
