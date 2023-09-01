#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: This is the letter to be checked
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
