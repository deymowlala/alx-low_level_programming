#include <stdio.h>

/**
 * main - A program that prints all different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int fig1 = '0'; 
	int fig2 = '0';

	for (fig2 = 0; fig2 <= 9; fig2++)
	{
		for (fig1 = 0; fig1 <= 8; fig1++)
		{
			if (!((fig1 == fig2) || (fig2 > fig1)))
			{
				putchar(fig2);
				putchar(fig1);
				if (!(fig1 == '9') && (fig2 == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
