#include "main.h"

/**
 * print_rev - Function that prints a string,
 * in reverse, followed by a new line
 * @s: string to be printed in reverse order
 */

void print_rev(char *s)
{
	int leng = 0;
	int r;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (r = leng; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
