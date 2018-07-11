#include "holberton.h"
/**
 *_strpbrk - search a string for any set of bytes
 *@s: given string
 *@accept: bytes for which to search
 *Return: Pointer to byte in string
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
		a++;
	}
	if (accept[b] == '\0')
		return (s + a);
	return ((void *)0);
}
