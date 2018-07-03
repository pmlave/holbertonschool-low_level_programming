#include "holberton.h"

/**
 *_strlen - returns length of string
 *@s: passed in string
 *
 *Return: Value of string length
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}
