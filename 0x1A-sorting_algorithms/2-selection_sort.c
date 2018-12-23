#include "sort.h"

/**
 * selection_sort - sort with the selection sort algorithm
 * @array: Given array to sort
 * @size: Size of array
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int temp;

	if (!array || size == 0)
		return;
	i = 0;
	while (i < size - 1)
	{
		temp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < temp)
			{
				temp = array[j];
				index = j;
			}
		}
		if (temp != array[i])
		{
			array[index] = array[i];
			array[i] = temp;
			print_array((const int *)array, size);
		}
		i++;
	}
}
