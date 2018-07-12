#include "holberton.h"
#include <stdio.h>
/**
 * _helper - checking the numer to be prime
 * @m: Checking division ability
 * @n: Given number to check
 * Return: 1 for yes, 0 for no
 */
int _helper(int m, int n)
{
	if (m == n)
		return (1);
	if (n % m == 0)
		return (0);
	return (_helper(m + 1, n));

}
/**
 * is_prime_number - checking if a number is prime
 * @n: Given number to check
 * Return: Value passed in from _helper
 */
int is_prime_number(int n)
{
	if (n == 1 || n == -1)
		return (0);
	return(_helper(2, n));
}
