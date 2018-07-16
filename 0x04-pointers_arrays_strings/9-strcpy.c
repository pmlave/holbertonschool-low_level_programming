#include "holberton.h"
/**
 * _strcpy - copying string value to dest
 * @dest: Destination location for string
 * @src: Source for string value
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
