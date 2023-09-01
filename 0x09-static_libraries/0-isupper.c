#include "main.h"

/**
 * int _isupper - A function that checks for uppercase character
 * @c: Interger to be determined
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
