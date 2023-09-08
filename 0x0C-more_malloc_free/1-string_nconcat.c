#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @n: byte to concatenates
 * @s1: String 1
 * @s2: String 2
 * Return: pointer that point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{	unsigned int s1leng = 0;
	unsigned int s2leng = 0;
	unsigned int i;
	char *result;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1leng++;
	for (i = 0; s2[i] != '\0'; i++)
		s2leng++;
	result = malloc(sizeof(char) * (s1leng + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= s2leng)
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			result[s1leng + i] = s2[i];
		result[s1leng = i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[s1leng + i] = s2[i];
		result[s1leng = i] = '\0';
	}
	return (result);
}
