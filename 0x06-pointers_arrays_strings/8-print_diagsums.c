#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - printing the sums of values in a diagonal line in an array
 * @a: Array to check through
 * @size: Size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;


	while (c < size)
	{
		b = b + *(a);
		if (c < size - 1)
			a = a + size + 1;
		c++;
	}
	while (d < size)
	{
		a = a - size + 1;
		e = e + *(a);
		d++;
	}
	printf("%d, %d\n", b, e);
}
