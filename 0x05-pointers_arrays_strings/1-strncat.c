#include "holberton.h"

/**
 *_strncat - concatenate two strings
 *@dest: passed in destination string
 *@src: passed in source string
 *@n: int value for number of bytes
 *Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destl, srcl;

	destl = 0;
	while (dest[destl] != '\0')
		destl++;
	for (srcl = 0; srcl < n && src[srcl] != '\0'; srcl++)
		dest[destl + srcl] = src[srcl];
	dest[destl + srcl] = '\0';

	return (dest);

}
