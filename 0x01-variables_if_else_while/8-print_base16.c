#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
