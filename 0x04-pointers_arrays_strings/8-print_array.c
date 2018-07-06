#include "holberton.h"
#include <stdio.h>
/**
 *print_array - printing a given number of array elements
 *@a: given array
 *@n: given number of elements to print
 *Return: Void
 */

void print_array(int *a, int n)
{
	int b;

	b = 0;
		while (b < n)
		{
			printf("%d", a[b]);
			if (b < 4)
				printf(", ");
			b++;
		}
	printf("\n");
}
