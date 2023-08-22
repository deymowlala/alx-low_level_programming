#include "main.h"
/**
 * puts2 - Function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: String character to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			-putchar(str[i]);
	}
	_putchar('\n');
}
