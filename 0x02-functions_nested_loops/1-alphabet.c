#include "main.h"
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);

}
