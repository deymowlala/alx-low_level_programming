#include <stdio.h>

/**
 * main - A program that prints all the letters in lowercase except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
