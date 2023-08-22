#include "main.h"
/**
 * rev_string - Function that reverses a string.
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	char reve = s[0];
	int count = 0;
	int j;

	while (s[count] != '\0')
		count++;
	for (j = 0; j < count; j++)
	{
		count--;
		reve = s[j];
		s[j] = s[count];
		s[count] = reve;
	}
}
