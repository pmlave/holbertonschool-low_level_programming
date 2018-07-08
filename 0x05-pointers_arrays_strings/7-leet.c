#include "holberton.h"
/**
 * leet - encode a string in 1337
 * @s: String parameter passed in
 * Description: See above
 * Return: Pointer to String
 */
char *leet(char *s)

{

	int i;
	int j;
	int k;

	int a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

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
