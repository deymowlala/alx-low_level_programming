#include <stdio.h>

/**
 * main - A program that prints alphabet in lowercase and then in uppercase
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';
	char letter = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);

        while (letter <= 'Z')
        {
                putchar(letter);
                letter++;
        }
	putchar('\n');
        return (0);
}
