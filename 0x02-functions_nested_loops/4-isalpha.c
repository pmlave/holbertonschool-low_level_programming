#include "holberton.h"
/**
 *_isalpha - checking if passed in character is a letter
 *@c: given rng character
 *Return: 1 if letter, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
