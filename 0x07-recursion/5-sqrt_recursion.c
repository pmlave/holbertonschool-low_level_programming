#include "holberton.h"
/**
 * _sqrt_recursion - checking value for a natural square root
 * @n: given value
 * Return: Int
 */
int _helper(int m, int n)
{
	if (m * m == n)
		return (m);
	if (m > n / 2)
		return (-1);
	return (_helper(m + 1, n));
}
int _sqrt_recursion(int n)
{
	return (_helper(1, n));
}
