#include "main.h"
#include "string.h"
/**
 * _strncat - Function that concatenates two strings
 *@dest: String to be added to
 @src: String to concatenate to dest
 @n: Total number of character to copy to dest from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int leng = strlen(dest);
	int j;

	for (j = 0; j < n && *src != '\0'; j++)
	{
		dest[leng + j] = src[j];
		src++;
	}
	dest[leng + j] = '\0';
	return (dest);
}
