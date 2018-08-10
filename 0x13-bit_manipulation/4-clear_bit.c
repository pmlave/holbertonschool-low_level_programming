#include "holberton.h"
/**
 * clear_bit - setting nth bit to 1
 * @n: Pointer to int
 * @index: Index to change value
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
