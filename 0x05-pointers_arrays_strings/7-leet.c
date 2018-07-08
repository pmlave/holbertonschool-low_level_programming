#include "holberton.h"
/**
 *leet - changing values to 1337
 *@s: value of string
 *Description: First line
 *Return: pointer to string
 */
char *leet(char *s)
{
	int i, j;
	int a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j] + '0';
			}
		}
	}
	return (s);
}
