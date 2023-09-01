#include "main.h"
/**
 * _strcat - Function that concatenates two strings.
 * @dest: String to be appended with
 * @src: String to append to
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
		destlen++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		srclen++;
	}
	for (j = 0; j <= srclen; j++)
		dest[destlen + j] = src[j];
	return (dest);
}
