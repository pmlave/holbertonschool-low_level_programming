#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_concat - concatenate two strings
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
	i--;
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
		for (a = 0; a < length; a++)
		{
			if (a <= i)
			{
				ar[a] = s1[a];
			}
			else
			{
				ar[a] = s2[a - i];
			}
		}
	}
	return (ar);
}
