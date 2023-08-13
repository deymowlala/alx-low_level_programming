#include <stdio.h>

/**
 * main - A program that prints all different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int fig1, fig2;

	for (fig1 = 0; fig1 < 9; fig1++)
	{
		for (fig2 = 1; fig2 < 10; fig2++)
		{
			if (fig1 != fig2)
			{
				putchar((fig1 % 10) + '0');
				putchar((fig2 % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
