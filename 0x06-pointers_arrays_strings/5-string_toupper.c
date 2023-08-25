#include "main.h"
/**
 * string_toupper - Function that changes all lowercase
 * letters of a string to uppercase
 * @str: The string to be changed
 * Return: A pointer to the changed string
 */
char *string_toupper(char *str)
{
	int indes = 0;

	while (str[indes])
	{
		if (str[indes] >= 'a' && str[indes] <= 'z')
			str[indes] -= 32;
		indes++;
	}
	return (str);
}
