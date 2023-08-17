#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: This is the letter to be checked
 * Return: Aleays 0
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
