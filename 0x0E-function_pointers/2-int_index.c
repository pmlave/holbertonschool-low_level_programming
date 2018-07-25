#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searching for an integer in an array
 * @array: Given array to search
 * @size: Size of array
 * @cmp: Pointer to the function to evaluate
 * Return: -1 for failure, index value otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
