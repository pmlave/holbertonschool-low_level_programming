#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
