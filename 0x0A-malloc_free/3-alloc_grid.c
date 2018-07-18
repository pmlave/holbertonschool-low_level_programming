#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - allocating memory for a 2d array
 * @width: Width of array
 * @height: Height of array
 * Return: Pointer to new memory location
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int *ar;
	int **dbl;

	if (width < 1 || height < 1)
		return (NULL);
	dbl = malloc(height * (sizeof(int *)));
	if (dbl != NULL)
	{
		for (a = 0; a < height; a++)
		{
			ar = malloc(width * (sizeof(int)));
			if (ar != NULL)
			{
				dbl[a] = ar;
				for (b = 0; b < width; b++)
				{
					ar[b] = 0;
				}
			}
			else
			{
				a--;
				while (a >= 0)
				{
					free(dbl[a]);
					a--;
				}
				free(dbl);
				return (NULL);
			}
		}
	}
	return (dbl);
}
