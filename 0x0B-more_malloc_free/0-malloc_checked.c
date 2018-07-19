#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocating memory and checking if it works
 * @b: Size of memory needed for allocation
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
		exit(98);
	return (ar);
}
