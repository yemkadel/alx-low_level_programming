#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free malloc
 * grid: pointer to 2D array
 * height: number of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; 0 <= i; i--)
	{
		free(grid[i]);
	}
	free(grid);
	return;
}
