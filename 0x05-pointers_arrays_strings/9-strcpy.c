#include "main.h"
/**
 * _strcpy - Function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: Copy to
 * @src: Copy rom
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for (; n < 1; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
