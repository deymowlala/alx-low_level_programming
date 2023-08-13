#include <stdio.h>

/**
 * main - A program that prints al single-digit numbers with ,
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
