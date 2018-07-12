#include "holberton.h"
/**
 * _pow_recursion - raising a number to another power
 * @x: first given number
 * @y: second given number
 * Return: value of calculation or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y < 0)
		return (-1);
	return (1);
}
