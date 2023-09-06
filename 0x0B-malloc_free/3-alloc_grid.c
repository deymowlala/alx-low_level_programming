#include "main.h"
/**
 * alloc_grid - Function that returns a pointer to two dimensional array
 * @width: Number of columns
 * @height; Number of rows
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **result;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);

		if (result[i] == NULL)
		{
			free(result);
			for (j = 0; j < height; j++)
				free(result[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			result[i][j] = 0;
	}
	return (result);
}
