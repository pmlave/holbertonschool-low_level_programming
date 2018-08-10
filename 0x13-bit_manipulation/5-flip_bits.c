#include "holberton.h"
/**
 * flip_bits - checking the number of bits needed to flip a number to another
 * @n: First number
 * @m: Number we are flipping to
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0, b = 0, c = 0;

	while (n || m)
	{
		a = n & 1;
		b = m & 1;
		if (a != b)
			c++;
		n >>= 1;
		m >>= 1;
	}

	return (c);
}
