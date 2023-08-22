#include "main.h"
/**
 * puts2 - Function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: String character to be printed
 */
void puts2(char *str)
{
	int leng = 0;
	int r = 0;
	char *l = str;
	int k;

	while (*l != '\0')
	{
		l++;
		leng++;
	}
	r = leng - 1;
	for (k = 0; k <= r; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
