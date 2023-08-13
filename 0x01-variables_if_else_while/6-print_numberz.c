#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base 10 !printf
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
