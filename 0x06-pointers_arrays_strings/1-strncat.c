#include "main.h"
#include "string.h"
/**
 * _strncat - Function that concatenates two strings
 *@dest: String to be added to
 *@src: String to concatenate to dest
 *@n: Total number of character to copy to dest from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int indes = 0;
	int destleng = 0;

	while (dest[indes++])
		destleng++;
	for (indes = 0; src[indes] && indes < n; indes++)
		dest[destleng++] = src[indes];
	return (dest);
}
