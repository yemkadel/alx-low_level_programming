#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - grid
 * @width: width
 * @height: height
 *
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return ('\0');

	ptr = (int **) malloc(sizeof(int *) * height);
	if (!ptr)
		return ('\0');

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (!ptr[i])
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			return ('\0');
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
