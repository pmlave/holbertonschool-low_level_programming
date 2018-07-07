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
	int b, c;

	b = 0;
	c = 0;
		while (b < n)
		{
			if (c == 1)
				printf(", ");
			printf("%d", a[b]);
			b++;
			c = 1;
		}
	printf("\n");
}
