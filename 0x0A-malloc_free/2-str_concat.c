#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _str_concat - concatenating two strings into a new memory location
 * @s1: Given string passed in
 * @s2: Second string passed in
 * Return: Pointer to new memory location
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i1, i2;
	char *ar;

	size1 = 0;
	while (s1[size1] != '\0')
		size1++;
	size2 = 0;
	while (s2[size2] != '\0')
		size2++;
	ar = malloc((size1 + size2 + 1) * sizeof(char));
	if (ar != NULL)
	{
		for (i1 = 0; s1[i1] != '\0'; i1++)
		{
			ar[i1] = s1[i1];
		}
		for (i2 = 0; s2[i2] != '\0'; i2++)
		{
			ar[size1 + i2] = s2[i2];
		}
	}
	return (ar);
}
