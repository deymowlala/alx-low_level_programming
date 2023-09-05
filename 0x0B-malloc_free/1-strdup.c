#include "main.h"
/**
 * _strdup - copies string to a newly allocated space in memory
 * @str: string to copy to new space in memory
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	char *copies;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	copies = malloc(sizeof(char) * count + 1);
	if (copies == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copies[i] = str[i];
	return (copies);
}
