#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: First integer whose value will be swaped
 * @b: Second interger whose value will be swaped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
