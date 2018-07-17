#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - allocating memory for an array
 * @size: Given size of array
 * @c: Given character with which to initialize array
 * Return: Pointer to new array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ar;

	if (size == 0)
		return ('\0');
	ar = malloc(size * sizeof(char));
	for (a = 0; a < size; a++)
		ar[a] = c;
	return (ar);
}
