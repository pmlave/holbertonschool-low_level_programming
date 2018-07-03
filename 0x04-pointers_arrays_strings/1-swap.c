#include "holberton.h"

/**
 *swap_int - swapping passed in values
 *@a: value 1
 *@b: value 2
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
