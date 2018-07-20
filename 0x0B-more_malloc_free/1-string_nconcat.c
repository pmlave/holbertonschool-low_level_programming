#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: Sirst string to set
 * @s2: Second string to concatenate
 * @n: Number of bytes by which to limit s2
 * Return: Pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int a, i, j, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (j <= n)
	{
		length = (i + j + 1);
	}
	else if (j > n)
	{
		length = (i + n + 1);
	}
	ar = malloc(sizeof(char) * length);
	if (ar != NULL)
	{
		for (a = 0; a < i; a++)
		{
			ar[a] = s1[a];
		}
		for (a = 0; (a + i) < length; a++)
		{
			ar[a + i] = s2[a];
		}
		ar[a + i - 1] = '\0';
	}
	return (ar);
}
