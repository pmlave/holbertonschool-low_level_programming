#include "holberton.h"
/**
 *_memcpy - copies n bytes from memory area
 *@dest: destination for copied values
 *@src: source from which to copy
 *@n: number of bytes to copy
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
