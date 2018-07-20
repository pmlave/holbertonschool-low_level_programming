#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - new array of all values in a range
 * @min: Minimum end of range
 * @max: Maximum end of range
 * Return: Int pointer to array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (max < min)
		return (NULL);
	ar = malloc(sizeof(int) * (max + 1));
	if (ar != NULL)
	{
		i = 0;
		while (min <= max)
		{
			ar[i] = min;
			min++;
			i++;
		}
	}
	return (ar);
}
