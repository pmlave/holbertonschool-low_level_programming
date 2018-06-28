#include "holberton.h"
/**
 *_isupper - checking case of letter
 *@c: passed in character
 *Return: 1 for upper, 0 for lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
