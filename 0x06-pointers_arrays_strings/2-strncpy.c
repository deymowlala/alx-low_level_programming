#include "main.h"
/**
 * _strncpy - Function that copies a string.
 * @dest: Buffer storing destination string
 * @src: Source string
 * @n: Maximum number of bytes to be copied from src
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int indes = 0;
	int srcleng = 0;

	while (src[indes++])
		srcleng++;
	for (indes = 0; src[indes] && indes < n; indes++)
		dest[indes] = src[indes];
	for (indes = srcleng; indes < n; indes++)
		dest[indes] = '\0';
	return (dest);
}
