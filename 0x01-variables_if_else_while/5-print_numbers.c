#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base 10
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
