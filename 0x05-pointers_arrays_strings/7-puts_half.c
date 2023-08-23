#include "main.h"

/**
 * 7-puts_half - Function that prints half of a string,
 * followed by a new line.
 * @str: String whose second half will be printed
 */

void puts_half(char *str)
{
	int i, n;
	int length = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	n = (length - 1) / 2;
	while (n % 2 == 0)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
