#include "main.h"

/**
 * puts_half - Function that prints half of a string,
 * followed by a new line.
 * @str: String whose second half will be printed
 */

void puts_half(char *str)
{
	int i, n;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	n = (length - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
