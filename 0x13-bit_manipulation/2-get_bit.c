#include "holberton.h"
/**
 * get_bit - get a certain bit value
 * @n: Given number
 * @index: Location of value to acquire
 * Return: Value of digit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n >= index)
	{
		n = n >> index;
		if (n & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
