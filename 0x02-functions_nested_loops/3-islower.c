#include "holberton.h"
/**
 *_islower - checks the case of the character passed in
 *@c: a random number passed in from main.c function
 *Return: 1 For lowercase 0 for not
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
		return (0);
}
}
