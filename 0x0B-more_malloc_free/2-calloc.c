#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocate a memory block and initialize to 0
 * @nmemb: Number of elements
 * @size: Size of bytes
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar != NULL)
	{
		for (a = 0; a < nmemb; a++)
			ar[a] = 0;
	}
	return (ar);

}
