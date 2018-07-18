#include "holberton.h"
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int a, b;
	int *ar;
	int **dbl;

	if (width < 1 || height < 1)
		return ('\0');
	dbl = malloc(height * (sizeof(int *)));
	if (dbl != '\0')
	{
		for (a = 0; a < width; a++)
		{
			ar = malloc(width * (sizeof(int)));
			if (ar != '\0')
			{
				dbl[a] = ar;
				for (b = 0; b < width; b++)
				{
					ar[b] = 0;
				}
			}
			else
			{
				while (a >= 0)
				{
					free (dbl[a]);
					a--;
				}
				free (dbl);
				return ('\0');
			}
		}
	}
	return (dbl);
}
