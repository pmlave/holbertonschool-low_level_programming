#include "holberton.h"
/**
 * _helper - used to go through possible numbers
 * @m: beginning value to check
 * @n: numer for comparison
 * Return: Number that is natural root or -1 if there is not one
 */
int _helper(int m, int n)
{
	if (m * m == n)
		return (m);
	if (m > n / 2)
		return (-1);
	return (_helper(m + 1, n));
}
/**
 * _sqrt_recursion - checking value for a natural square root
 * @n: given value
 * Return: Value of helper output
 */
int _sqrt_recursion(int n)
{
	return (_helper(1, n));
}
