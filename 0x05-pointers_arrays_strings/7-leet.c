#include "holberton.h"

/**
 *leet - switching characters out with limited loops and conditionals
 *@s: given string
 *Return: pointer to string value
 */

char *leet(char *s)
{
	int a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, k = 0; j < 10; j++, k++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[k] + '0';
			}
		}
	}
	return (s);
}
