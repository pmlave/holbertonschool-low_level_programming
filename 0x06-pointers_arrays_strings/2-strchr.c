#include "holberton.h"
/**
 *_strchr - locate a character in a string
 *@s: given string to search
 *@c: given character for which to search
 *Return: First occurrence of character or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ((char *)s);
}
