#include "holberton.h"
/**
 *_abs - function for absolute values
 *@n: value being passed in
 *Description: Getting the positive value for any number passed in
 *Return: 0 for success
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = (n * -1);
		return (n);
	}

}
