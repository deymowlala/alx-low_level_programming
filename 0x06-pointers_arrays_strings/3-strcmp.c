#include "main.h"
/**
 * _strncpy - Function that compares two strings
 * @s1: Pointer to the first string to be compared
 * @s2: Pointer to the second string to be compared
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}	
