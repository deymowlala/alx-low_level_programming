#include "main.h"
/**
 * cap_string - Functions that capitalizes all words of a string.
 * @str: The string to be capitalised
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int indes = 0;

	while (str[indes])
	{
		while (!(str[indes] >= 'a' && str[indes] <= 'z'))
			indes++;
		if (str[indes - 1] == ' ' ||
				str[indes - 1] == '\t' ||
				str[indes - 1] == '\n' ||
				str[indes - 1] == ',' ||
				str[indes - 1] == ';' ||
				str[indes - 1] == '.' ||
				str[indes - 1] == '!' ||
				str[indes - 1] == '?' ||
				str[indes - 1] == '"' ||
				str[indes - 1] == '(' ||
				str[indes - 1] == ')' ||
				str[indes - 1] == '{' ||
				str[indes - 1] == '}' ||
				indes == 0)
			str[indes] -= 32;
		indes++;
	}
	return (str);
}
