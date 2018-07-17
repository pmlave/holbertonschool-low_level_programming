#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - allocating memory for a string and copying that string
 * @str: Given string passed in
 * Return: Pointer to new array
 */
char *_strdup(char *str)
{
	int size;
	int st;
	char *ar;

	if (str == NULL)
		return ('\0');
	size = 0;
	while (str[size] != '\0')
		size++;
	ar = malloc((size + 1) * (sizeof(char)));
	if (ar != NULL)
	{
		st = 0;
		while (str[st] != '\0')
		{
			ar[st] = str[st];
			st++;
		}
	}
	return (ar);

}
