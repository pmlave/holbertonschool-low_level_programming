#include "holberton.h"
/**
 *_isdigit - checking for 1-9
 *@c: passed in character
 *Return: 1 for digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);

}
