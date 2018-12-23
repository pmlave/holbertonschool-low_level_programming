#include "sort.h"

/**
 * quick_sort - implement the quick sort algorithm
 * @array: Given array to sort
 * @size: Size of the array
 * Return: Void
 */

void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		partition(array, 0, size - 1, size);
	else
		return;
}

void partition(int *array, size_t start, size_t end, size_t size)
{
	int piv;
	size_t i, j;

	piv = array[end];
	i = start;
	j = start;
	while (i <= end)
	{
		if (i == end || array[i] < piv)
		{
			if (j != i && array[j] > array[end])
			{
				swap(&array[i], &array[j]);
				print_array((const int *)array, size);
			}
			/* only increment if not at end */
			if (i != end)
				j++;
		}
		i++;
	}
/**
 * recurse back through partition while incrementing or decrementing start
 * or end values
 */
	if (j > start + 1)
		partition(array, start, j - 1, size);
	if (j < end - 1)
		partition(array, j + 1, end, size);

}

/**
 * swap - simple swap function
 * @a: First element to swap
 * @b: Second element to swap
 * Return: Void
 */

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
