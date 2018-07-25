#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - using a loop to call a function at each element or an array
 * @array: The given array
 * @size: Size of the array
 * @action: The pointer to the function being called
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (size != 0 && action != NULL && array != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
