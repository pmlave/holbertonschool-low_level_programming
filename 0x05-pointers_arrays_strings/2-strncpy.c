#include "holberton.h"
/**
 *_strncpy - copy a string  length n
 *@dest: destination string
 *@src: source string
 *@n: given length
 *Return: dest string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srcl = 0;

	while (src[srcl] != '\0' && srcl < n)
	{
		dest[srcl] = src[srcl];
		srcl++;
	}
	for (; srcl < n; srcl++)
		dest[srcl] = '\0';
	return (dest);
}
