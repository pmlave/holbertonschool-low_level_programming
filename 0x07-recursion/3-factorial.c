#include "holberton.h"
/**
 * factorial - returning a given factorial number
 * @n: given number to return
 * Return: Int of factorial
 */
int factorial(int n)
{
	int a = 1;

	if (n < 0)
		return (-1);
	else if (n > 0)
	{
		a = n * factorial(n - 1);
		return (a);
	}
	return (a);
}
