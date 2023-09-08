#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Size of memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *result;
	
	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
