#include "main.h"
/**
 * str_concat - Function that concatenate two strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int s1leng = 0;
	int s2leng = 0;
	int i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1leng++;
	for (i = 0; s2[i] != '\0'; i++)
		s2leng++;
	result = malloc(sizeof(char) * (s1leng + s2leng) + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		result[s1leng + i] = s2[i];
	return (result);
}
