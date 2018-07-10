#include "holberton.h"
/**
 *_memset - set values to constant byte b in memory
 *@s: given memory area
 *@b: given constant byte
 *@n: given number of bytes to fill
 *Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
