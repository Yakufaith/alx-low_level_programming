#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array row size
 * @height: array column size
 * Return: returns 2d pointer array
 * If width or height is 0 or negative, return NULL
 * The function should return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = (int **) malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		ptr[i] = (int *) malloc(height * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;

	return (ptr);
}
