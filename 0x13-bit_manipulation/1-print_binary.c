#include "holberton.h"
/**
 * print_binary - print some number in binary form
 * @n: Given number to print in binary
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int pow = 1;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (pow <= n)
	{
		pow *= 2;
		count++;
	}
	_putchar('1');
	pow = pow >> 1;
	n = n - pow;

	while (count > 1)
	{
		pow = pow >> 1;
		if (n >= pow)
		{
			_putchar('1');
			n = n - pow;
		}
		else
			_putchar('0');
		count--;

	}

}
