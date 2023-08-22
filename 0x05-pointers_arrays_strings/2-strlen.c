#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: Argument whose length is to be returned
 * Return: Always 0
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
