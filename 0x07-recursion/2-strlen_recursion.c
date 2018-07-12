#include "holberton.h"
/**
 * _strlen_recursion - returning the length of a string
 * @s: Given string to parse for length
 * Return: Length in form int
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return ( 1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
