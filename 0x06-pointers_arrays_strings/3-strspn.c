#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: initial segment
 *@accept: original string
 *Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;
	int d = 0;

	for (a = 0; s[a] != '\0' && d == 0; a++)
	{
		for (b = 0; accept[b] != '\0' && d == 0; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			if (s[a] != accept[b] && accept[b + 1] == '\0')
				d = 1;
		}
	}
	return (c);
}
