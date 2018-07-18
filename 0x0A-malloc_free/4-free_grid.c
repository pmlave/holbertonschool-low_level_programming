#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - freeing allocated memory from a created grid
 * @grid: Given grid pointer
 * @height: Given height of double pointer location
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int a;
	if (grid == NULL || height == 0)
		return;
	a = 0;
	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
